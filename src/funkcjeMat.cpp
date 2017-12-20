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

void zmianaZnakuMacierzy(macierz &A)
{
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			A.T[i][j]*=-1;
		}
	}
}

int wyznacznikMacierzy(macierz &A, int rozmiar)
{
	//int wyznacznik = 0;

	//if (rozmiar == 2)
	//{
	//	return((A.T[0][0]*A.T[1][1])-(A.T[1][0]*A.T[[0][1]));
	//}
	//else
//	{
	//	for (int i = 0; i < rozmiar; i++) {

	//	}
	//	wycznacnzi += pow(-1, i) * A.T[0][n] * wyznacznikMacierzy(A, rozmiar-1); //wyznacznik + -1^i(okreslamy znak) * (wyraz z peirwszej kolumny) * det(summacierz, romiar -1)
	//}
}

void macierzOdwrotna(macierz &A, macierz &D)
{
	//odwracanie macierzy
}

void rozwiazywanieRownania(macierz &A, macierz &B, macierz &C, macierz &D, macierz &E, macierz &F)
{
	//rozwiazywanie rownana  AX + B = C
	//X = A^-1*(C-B)
	roznicaMacierzy(C,B,D);
	macierzOdwrotna(A,E);
	mnozenieMacierzy(E,D,F);

}
