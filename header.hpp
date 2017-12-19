//glowny plik naglowkowy

#ifndef header_hpp
#define header_hpp

#include <iostream>
#define M 2
#define N 2

using namespace std;

struct macierz
{
	int T[M][N];
	bool istnieje = false;
};

void wczytajMacierz(macierz &A);
void drukujMacierz(macierz &A);
void dodawanieMacierzy(macierz &A, macierz &B, macierz &D);
void roznicaMacierzy(macierz &A, macierz &B, macierz &D)
void mnozenieMacierzy(macierz &A, macierz &B, macierz &D);
void odwrotnaMacierz(macierz &A, macierz &D);
void rozwiazywanieRownania(macierz &A, macierz &B, macierz &C, macierz &D, macierz &E, macierz &F); 	//rozwiazywanie rownana  AX + B = C, C-B = D A^-1 = E F = X

int mnozenieWierszKolumna(macierz &A, macierz &B, int wiersz, int kolumna);
int wyznacznikMacierzy(macierz &A);

#endif
