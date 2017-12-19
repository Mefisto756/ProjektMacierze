//glowny plik naglowkowy

#ifndef header_hpp
#define header_hpp

#include <iostream>
#define M 5
#define N 5

using namespace std;

struct macierz
{
	int T[M][N];
};

macierz A, B, C, D;

void wczytajMacierz(macierz &A);
void drukujMacierz(macierz &A);
void dodawanieMacierzy(macierz &A, macierz &B);
void mnozenieMacierzy(macierz &A, macierz &B);
void odwrotnaMacierz(macierz &A);
void rozwiazywanieRownania(macierz &A, macierz &B, macierz &C); 	//rozwiazywanie rownana  AX + B = D

int mnozenieWierszKolumna(macierz &A, macierz &B, int wiersz, int kolumna);
int wyznacznikMacierzy(macierz &A);
int sprawdzenieCzyMacierzIstnieje(macierz &A); //1 - istnieje, 0 - nie istnieje

#endif
