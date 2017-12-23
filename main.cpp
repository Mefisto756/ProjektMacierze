
#include "headers/header.hpp"

int main()
{
	int input = 1;

	while(input!=0)
	{

			cout<<"\nMenu:\n"<<
					"1.Wczytaj macierz.\n"<<
					"2.Wypisz macierz.\n"<<
					"3.Dodawanie macierzy.\n"<<
					"4.Mnozenie 2 macierzy. \n"<<
					"5.Liczenie wyznacznika macierzy.\n"<<
					"6.Macierz odwrotna. \n"<<
					"7.Rozwiazywanie rownania. \n"<<
					"0.Wyjscie."<<endl;
					cin>>input;

				switch(input)
				{
					case 1:																																//wczytywanie macierzy
						MenuWypelnianie();
					break;
					case 2:																																//drukuj macierz
						MenuDrukujMacierz();
					break;
					case 3:																																//dodawanie macierzy
						MenuDodawanieMacierzy();
					break;
					case 4:																																//mnozenie 2 macierzy
						MenuMnozenieMacierzyXmacierz();
					break;
					case 5:																																//liczenie wyznacznika macierzy
						MenuWyznacznikaMacierzy();
					break;
					case 6:																																//macierz odwrotna
						MenuMacierzOdwrotna();
					break;
					case 7:																																//rozwiazywanie rownanai
						MenuRozwiazywanieRownania();
					break;
				}
	}

	return 0;
}
