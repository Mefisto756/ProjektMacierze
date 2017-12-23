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
	for (int i = 0; i < M; i++)
 	{
		for (int j = 0; j < N; j++)
	 	{
			D.T[i][j]=A.T[i][j]+B.T[i][j];
		}
	}
}

void roznicaMacierzy(macierz &A, macierz &B, macierz &D)
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
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

double wyznacznikMacierzy(int rozmiar, double mat[M][N])
{
		double det = 0;
	  int c, i, j, podi, podj;
    double podMat[M][N];

    if (rozmiar == 1)
    {
        return(mat[0][0]);
    }
    else
    {
        for(c = 0; c < rozmiar; c++)
        {
            podi = 0;

            for(i = 1; i < rozmiar; i++)
            {
            	podj = 0;

                for(j = 0; j < rozmiar; j++)
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
        det = det + (pow(-1 ,c) * mat[0][c] * wyznacznikMacierzy(rozmiar - 1 ,podMat));
        }
    }
    return det;
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
			if (j>i) {
				tmp = A.T[i][j];
				A.T[i][j]=A.T[j][i];
				A.T[j][i]=tmp;
			}
		}
	}
}

void macierzDopelnienAlg(macierz &A, macierz &F, int rozmiar)
{
	int podM = 0;
	int podN = 0;
	double podMacierz[N][N];
	int h=0,g=0;
	for (int p = 0; p < N; p++) 																					//wyciete wiersze
	{
		for (int i = 0; i < N; i++) 																				//wyciete kolumny
		{
			for (int j = 0; j < N; j++)
			{
				for (int k = 0; k < N; k++)
				{
					if (j==p || k == i)
					{
						continue;
					}
					else
					{
						podMacierz[h][g] = A.T[j][k];
						if (g<N-2)
						{
							g++;
						}
						else
						{
							g=0;
							h++;
						}
					}
				}
			}
			F.T[p][i] = pow(-1,p+i) * wyznacznikMacierzy(N-1, podMacierz);
			g=0;
			h=0;
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
	roznicaMacierzy(C,B,D); 									//D wynik roznicy C-B
	macierzOdwrotna(A,E);											//A^-1 = E
	mnozenieMacierzyXmacierz(E,D,F);					//mnozenie roznicy razy E z lewej strony, F=X
	drukujMacierz(F);

}
