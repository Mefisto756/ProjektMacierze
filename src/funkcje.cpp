#include "../headers/header.hpp"

string sciezka;

void wczytajMacierz(macierz &A)
{
	cout<<"\nPodaj wspolczynniki: "<<endl;

	for (int i = 0; i < M; ++i)
	{
		for (int j = 0; j < M; ++j)
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
		for (int j = 0; j < M; ++j)
		{
			cout<<A.T[i][j]<<" ";
		}
		cout<<endl;
	}
}

void pobierzZpliku(string sciezka)
{
  fstream plik;
  plik.open(sciezka, fstream::in);




  plik.close();

}

void zapiszDoPliku(string sciezka)
{
  fstream plik;
  plik.open(sciezka, fstream::out);




  plik.close();

}
