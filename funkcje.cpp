#include "header.hpp"

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

void mnozenieMacierzy(macierz &A, macierz &B, macierz &D)
{
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			D.T[i][j] = mnozenieWierszKolumna(A,B, i, j);
		}
	}
}

int wyznacznikMacierzy(macierz &A)
{
	//wyznacnzik
}

void odwrotnaMacierz(macierz &A, macierz &D)
{
	//odwracanie macierzy
}

void rozwiazywanieRownania(macierz &A, macierz &B, macierz &C, macierz &D, macierz &E, macierz &F)
{
	//rozwiazywanie rownana  AX + B = C
	//X = A^-1*(C-B)
	roznicaMacierzy(C,B,D);
	odwrotnaMacierz(A,E);
	mnozenieMacierzy(E,D,F);

}
