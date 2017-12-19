
#include "header.h"

int main()
{
	int input = 1;

	cout<<"Menu:\n"<<
		  "1.Wczytaj macierz.\n"<<
		  "2.Wypisz macierz.\n"<<
		  "3.Dodawanie macierzy.\n"<<
		  "4.Mnozenie 2 macierzy. \n"<<
		  "5.Liczenie wyznacznika macierzy.\n"<<
		  "6.Macierz odwrotna. \n"<<
		  "7.Rozwiazywanie rownania. \n"<<
		  "0.Wyjscie."<<endl;

	while(input!=0)
	{

				cin>>input;

				switch(input)
				{
					case 1:
					{
						//wybor ktora macierz wczytac oraz czy nadpisac dane w przypadku istnienia
						if(sprawdzenieCzyMacierzIstnieje(A)==0)
							wczytajMacierz(A);
						else
							//czy chcesz nadpisac macierz bo isnieje?
						//lub
						if(sprawdzenieCzyMacierzIstnieje(B)==0)
							wczytajMacierz(B);
						else
							//czy chcesz nadpisac macierz bo isnieje?
						//lub
						if(sprawdzenieCzyMacierzIstnieje(C)==0)
							wczytajMacierz(C);
						else
							//czy chcesz nadpisac macierz bo isnieje?
					}
					break;
					case 2:
					{
						//wybor ktora macierz wypisac
						if(sprawdzenieCzyMacierzIstnieje(A)==1)
							drukujMacierz(A);
						//lub
						if(sprawdzenieCzyMacierzIstnieje(B)==1)
							drukujMacierz(B);
						//lub
						if(sprawdzenieCzyMacierzIstnieje(C)==1)
							drukujMacierz(C);
					}
					break;
					case 3:
					{
						//ktora macierz z ktora, mamy A B C
						//dodawanieMacierzy(); //dodac argumenty

						drukujMacierz(D);
					}
					break;
					case 4:
					{
						//ktora macierz z ktora, mamy A B C
						//if(sprawdzenieCzyMacierzIstnieje()==1) // dodac argumetny
							//mnozenieMacierzy(); //dodac argumenty

					}
					break;
					case 5:
					{
						//wybor macierzy do liczenia wyznaccznika
						if(sprawdzenieCzyMacierzIstnieje(A)==1)
							wyznacznikMacierzy(A);
							drukujMacierz(D);
						//lub
						if(sprawdzenieCzyMacierzIstnieje(B)==1)
							wyznacznikMacierzy(B);
							drukujMacierz(D);
						//lub
						if(sprawdzenieCzyMacierzIstnieje(C)==1)
							wyznacznikMacierzy(C);
							drukujMacierz(D);
					}
					break;
					case 6:
					{
						//z ktorej macierzy liczyc odwrotna
						if(sprawdzenieCzyMacierzIstnieje(A)==1)
							odwrotnaMacierz(A);
							drukujMacierz(D);
						//lub
						if(sprawdzenieCzyMacierzIstnieje(B)==1)
							odwrotnaMacierz(B);
							drukujMacierz(D);
						//lub
						if(sprawdzenieCzyMacierzIstnieje(C)==1)
							odwrotnaMacierz(C);
							drukujMacierz(D);
					}
					break;
					case 7:
					{
						if(sprawdzenieCzyMacierzIstnieje(A)==1 && sprawdzenieCzyMacierzIstnieje(B)==1 && sprawdzenieCzyMacierzIstnieje(C)==1)
						//napisac wzor
							rozwiazywanieRownania(A,B,C);
							drukujMacierz(D);
					}
					break;
				}
	}

	return 0;
}
