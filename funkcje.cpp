#include "header.hpp"

void wczytajMacierz(macierz &A)
{
	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin>>A.T[i][j];
		}
	}

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

void dodawanieMacierzy(macierz &A, macierz &B, macierz &C)
{
	//dodanie macierzy
	drukujMacierz(D);
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

void mnozenieMacierzy(macierz &A, macierz &B)
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

void odwrotnaMacierz(macierz &A)
{
	//odwracanie macierzy
}

void rozwiazywanieRownania(macierz &A, macierz &B, macierz &C)
{
	//rozwiazywanie rownana  AX + B = C
}

int sprawdzenieCzyMacierzIstnieje(macierz &A)
{
	int wynik = 0;
	//sprawdzenie czy istnieje macierz, tak wynik++
	if (wynik == 0)
	{
		cout<<"Macierz nie istnieje !!!!!!"<<endl;
	}
	return wynik;
}
