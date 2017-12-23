#include "../headers/header.hpp"

void wczytajMacierz(macierz &A)
{
	cout<<"\nPodaj wspolczynniki: "<<endl;
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin>>A.T[i][j];
		}
	}
	A.istnieje = true;
	cout<<endl;
}

void drukujMacierz(macierz &A)
{
	cout<<endl;
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cout<<A.T[i][j]<<" ";
		}
		cout<<endl;
	}
}

void dodawanieMacierzy(macierz &A, macierz &B, macierz &D)
{
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			D.T[i][j]=A.T[i][j]+B.T[i][j];
		}
	}
}

void roznicaMacierzy(macierz &A, macierz &B, macierz &D)
{
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			D.T[i][j]=A.T[i][j]-B.T[i][j];
		}
	}
}

int mnozenieWierszKolumna(macierz &A, macierz &B, int wiersz, int kolumna)
{
	int suma = 0;
	for (int i = 0; i < M;)
	{
		for (int j = 0; j < N; ++j, i++)
		{
			suma += A.T[wiersz][j] * B.T[i][kolumna];
		}
	}
	return suma;
}

void mnozenieMacierzyXmacierz(macierz &A, macierz &B, macierz &D)
{
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			D.T[i][j] = mnozenieWierszKolumna(A,B, i, j);
		}
	}
}

void zmianaZnakuMacierzy(macierz &A)
{
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			A.T[i][j]*=-1;
		}
	}
}

double wyznacznikMacierzy(int n, double mat[M][N])
{
		double d = 0;
	  int c, podi, i, j, podj;
    double podMat[M][N];

    if (n == 2)
    {
        return( (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    }
    else
    {
        for(c = 0; c < n; c++)
        {
            podi = 0;

            for(i = 1; i < n; i++)
            {
                podj = 0;

                for(j = 0; j < n; j++)
                {

                    if (j == c)
                    {

                        continue;

                    }

                    podMat[podi][podj] = mat[i][j];
                    podj++;
                }
                podi++;
            }
        d = d + (pow(-1 ,c) * mat[0][c] * wyznacznikMacierzy(n - 1 ,podMat));
        }
    }
    return d;
}

void mnozenieMacierzyXskalar(macierz &A, double skalar, int rozmiar)
{
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			A.T[i][j] *=skalar;
		}
	}

}

void transponowaniMacierzy(macierz &A)
{
	double tmp = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			tmp = A.T[i][j];
			A.T[i][j]=A.T[j][i];
			A.T[j][i]=tmp;
		}
	}
}

void macierzDopelnienAlg(macierz &A, macierz &F, int rozmiar)
{
	int podM = 0;
	int podN = 0;
	double podMacierz[M][N];

	for (int p = 0; p < rozmiar; p++) 																					//wyciete wiersze
	{
		for (int i = 0; i < rozmiar; i++) 																				//wyciete kolumny
		{
			for (int j = 0; j < rozmiar; j++)
			{
				for (int k = 0; k < rozmiar; k++)
				{
					if (j==p || k == i) {
						continue;
					}
					podMacierz[j][k] = A.T[j][k];
				}
			}
			F.T[p][i] = wyznacznikMacierzy(rozmiar-1, podMacierz);
		}
	}

}

void macierzOdwrotna(macierz &A, macierz &D)
{
	double wyznacznik = wyznacznikMacierzy(N,A.T);
	double skalar = 1/wyznacznik;

	macierzDopelnienAlg(A,D, N);
	transponowaniMacierzy(D);
	mnozenieMacierzyXskalar(D, skalar, N);

}

void rozwiazywanieRownania(macierz &A, macierz &B, macierz &C, macierz &D, macierz &E, macierz &F)
{
	//rozwiazywanie rownana  AX + B = C
	//X = A^-1*(C-B)
	roznicaMacierzy(C,B,D);
	macierzOdwrotna(A,E);
	mnozenieMacierzyXmacierz(E,D,F);
	drukujMacierz(F);

}
