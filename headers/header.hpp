//glowny plik naglowkowy

#ifndef header_hpp
#define header_hpp

#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

#define M 5

using namespace std;

struct macierz
{
	double T[M][M];
	bool istnieje = false;
};

//LOGIKA MENU

void MenuWypelnianie();
void MenuDrukujMacierz();
void MenuDodawanieMacierzy();
void MenuMnozenieMacierzyXmacierz();
void MenuWyznacznikaMacierzy();
void MenuMacierzOdwrotna();
void MenuRozwiazywanieRownania();

//FUNKCJE MATEMATYCZNE NA MACIERZACH

void dodawanieMacierzy(macierz &A, macierz &B, macierz &D);
void roznicaMacierzy(macierz &A, macierz &B, macierz &D);
void mnozenieMacierzyXmacierz(macierz &A, macierz &B, macierz &D);
void macierzOdwrotna(macierz &A, macierz &D);
void rozwiazywanieRownania(macierz &A, macierz &B, macierz &C, macierz &D, macierz &E, macierz &F); 	//rozwiazywanie rownana  AX + B = C, C-B = D A^-1 = E F = X
void mnozenieMacierzyXskalar(macierz &A, double skalar, int rozmiar);
void transponowaniMacierzy(macierz &A);
void macierzDopelnienAlg(macierz &A, macierz &F, int rozmiar);

int mnozenieWierszKolumna(macierz &A, macierz &B, int wiersz, int kolumna);
double wyznacznikMacierzy(int rozmiar, double T[M][M]);

//FUNKCJE PROGRAMU

void wczytajMacierz(macierz &A);
void drukujMacierz(macierz &A);
void pobierzZpliku(string sciezka);	//LINUX
void zapiszDoPliku(string sciezka);	//LINUX

//TESTOWANIE

void test();

#endif
