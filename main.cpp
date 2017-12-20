
#include "headers/header.hpp"

macierz A, B, C, D, E, F;

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
					{
						char wybor = 'y';

						while(wybor=='y')
							{
								cout<<"Ktora macierz wypelnic? (A,B,C):  ";
								cin >> wybor;
								switch (wybor)
								{
									case 'A':
									{
										if(!A.istnieje)
											wczytajMacierz(A);
										else
											{
												cout<<"\nMacierz A istnieje!! Czy chcesz nadpisac dane? (y/n)"<<endl;
												cin>>wybor;
												if (wybor=='y')
													wczytajMacierz(A);
											}
									}
									break;
									case 'B':
									{
										if(!B.istnieje)
											wczytajMacierz(B);
										else
											{
												cout<<"\nMacierz A istnieje!! Czy chcesz nadpisac dane? (y/n)"<<endl;
												cin>>wybor;
												if (wybor=='y')
													wczytajMacierz(B);
											}
									}
									break;
									case 'C':
									{
										if(!C.istnieje)
											wczytajMacierz(C);
										else
											{
												cout<<"\nMacierz A istnieje!! Czy chcesz nadpisac dane? (y/n)"<<endl;
												cin>>wybor;
												if (wybor=='y')
													wczytajMacierz(C);
											}
									}
									break;
								}
								cout<<"Wypelnic inna macierz? (y/n)";
								cin>>wybor;
							}
					}
					break;
					case 2:																																//drukuj macierz
					{
						char wybor = 'y';
						while(wybor=='y')
						{
							cout<<"Ktora macierz wypisac? (A,B,C)";
							cin>>wybor;
							switch (wybor)
							{
								case 'A':
								{
									if(A.istnieje==true)
										drukujMacierz(A);
									else
										cout<<"Macierz A nie istnieje!!"<<endl;
								}
								break;
								case 'B':
								{
									if(B.istnieje==true)
										drukujMacierz(B);
									else
										cout<<"Macierz B nie istnieje!!"<<endl;
								}
								break;
								case 'C':
								{
									if(C.istnieje==true)
										drukujMacierz(C);
									else
										cout<<"Macierz C nie istnieje!!"<<endl;
								}
								break;
							}
							cout<<"Wydrukowac inna macierz? (y/n)";
							cin>>wybor;
						}
					}
					break;
					case 3:																																//dodawanie macierzy
					{
						char wybor = ' ';
						cout<<"Podaj pierwszy wyraz sumy (A,B,C): ";
						cin>>wybor;
						cout<<endl;

						switch (wybor)
						{
							case 'A':
							{
								cout<<"Podaj drugi wyraz sumy (A,B,C): ";
								cin>>wybor;
								cout<<endl;
								switch (wybor)
							 	{
									case 'A':
									{
										dodawanieMacierzy(A,A,D);
										cout<<"A + A = ";
									}
									break;
									case 'B':
									{
										dodawanieMacierzy(A,B,D);
										cout<<"A + B = ";
									}
									break;
									case 'C':
									{
										dodawanieMacierzy(A,C,D);
										cout<<"A + C = ";
									}
									break;
								}
							}
							break;
							case 'B':
							{
								cout<<"Podaj drugi wyraz sumy (A,B,C): ";
								cin>>wybor;
								cout<<endl;
								switch (wybor)
								{
									case 'A':
									{
										dodawanieMacierzy(B,A,D);
										cout<<"B + A = ";
									}
									break;
									case 'B':
									{
										dodawanieMacierzy(B,B,D);
										cout<<"B + B = ";
									}
									break;
									case 'C':
									{
										dodawanieMacierzy(B,C,D);
										cout<<"B + C = ";
									}
									break;
								}
							}
							break;
							case 'C':
							{
								cout<<"Podaj drugi wyraz sumy (A,B,C): ";
								cin>>wybor;
								cout<<endl;
								switch (wybor)
								{
									case 'A':
									{
										dodawanieMacierzy(C,A,D);
										cout<<"C + A = ";
									}
									break;
									case 'B':
									{
										dodawanieMacierzy(C,B,D);
										cout<<"C + B = ";
									}
									break;
									case 'C':
									{
										dodawanieMacierzy(C,C,D);
										cout<<"C + C = ";
									}
									break;
								}
							}
							break;
						}
						drukujMacierz(D);
					}
					break;
					case 4:																																//mnozenie 2 macierzy
					{
						char wybor = ' ';
						cout<<"Podaj pierwszy wyraz iloczynu (A,B,C): ";
						cin>>wybor;
						cout<<endl;

						switch (wybor)
						{
							case 'A':
							{
								cout<<"Podaj drugi wyraz iloczynu (A,B,C): ";
								cin>>wybor;
								cout<<endl;
								switch (wybor)
							 	{
									case 'A':
									{
										mnozenieMacierzy(A,A,D);
										cout<<"A x A = ";
									}
									break;
									case 'B':
									{
										mnozenieMacierzy(A,B,D);
										cout<<"A x B = ";
									}
									break;
									case 'C':
									{
										mnozenieMacierzy(A,C,D);
										cout<<"A x C = ";
									}
									break;
								}
							}
							break;
							case 'B':
							{
								cout<<"Podaj drugi wyraz iloczynu (A,B,C): ";
								cin>>wybor;
								cout<<endl;
								switch (wybor)
								{
									case 'A':
									{
										mnozenieMacierzy(B,A,D);
										cout<<"B x A = ";
									}
									break;
									case 'B':
									{
										mnozenieMacierzy(B,B,D);
										cout<<"B x B = ";
									}
									break;
									case 'C':
									{
										mnozenieMacierzy(B,C,D);
										cout<<"B x C = ";
									}
									break;
								}
							}
							break;
							case 'C':
							{
								cout<<"Podaj drugi wyraz iloczynu (A,B,C): ";
								cin>>wybor;
								cout<<endl;
								switch (wybor)
								{
									case 'A':
									{
										mnozenieMacierzy(C,A,D);
										cout<<"C x A = ";
									}
									break;
									case 'B':
									{
										mnozenieMacierzy(C,B,D);
										cout<<"C x B = ";
									}
									break;
									case 'C':
									{
										mnozenieMacierzy(C,C,D);
										cout<<"C x C = ";
									}
									break;
								}
							}
							break;
						}
						drukujMacierz(D);
					}
					break;
					case 5:																																//liczenie wyznacznika macierzy
					{
						char wybor = 'y';
						while(wybor=='y')
							{
								cout<<"Z ktorej macierzy policzyc wyznacznik? (A,B,C) ";
								cin>>wybor;

								switch (wybor)
								{
									case 'A':
									{
										if (A.istnieje) {
											cout<<"Wyznacnzik A to "<<wyznacznikMacierzy(A, M);
										}
										else
											cout<<"Macierz A nie istnieje!!"<<endl
									}
									break;
									case 'B':
									{
										if (B.istnieje) {
											cout<<"Wyznacnzik B to "<<wyznacznikMacierzy(B, M);
										}
										else
											cout<<"Macierz B nie istnieje!!"<<endl;
									}
									break;
									case 'C':
									{
										if (C.istnieje) {
											cout<<"Wyznacnzik C to "<<wyznacznikMacierzy(C, M);
										}
										else
											cout<<"Macierz C nie istnieje!!"<<endl;
									}
									break;
								}
								cout<<"Policzyc kolejny wyznacznik? (y/n)";
								cin>>wybor;
							}
					}

					break;
					case 6:																																//macierz odwrotna
					{
						char wybor = 'y';
						while(wybor=='y')
							{
								cout<<"Z ktorej macierzy policzyc macierz odwrotna? (A,B,C) ";
								cin>>wybor;

								switch (wybor)
								{
									case 'A':
									{
										if (A.istnieje) {
											cout<<"Macierz odwrotna A to "<<odwrotnaMacierzy(A,D);
											drukujMacierz(D);
										}
										else
											cout<<"Macierz A nie istnieje!!"<<endl
									}
									break;
									case 'B':
									{
										if (B.istnieje) {
											cout<<"Macierz odwrotna B to "<<odwrotnakMacierzy(B,D);
											drukujMacierz(D);
										}
										else
											cout<<"Macierz B nie istnieje!!"<<endl;
									}
									break;
									case 'C':
									{
										if (C.istnieje) {
											cout<<"Macierz odwrotna C to "<<odwrotnaMacierz(C,D);
											drukujMacierz(D);
										}
										else
											cout<<"Macierz C nie istnieje!!"<<endl;
									}
									break;
								}
								cout<<"Policzyc kolejna macierz odwrotna? (y/n)";
								cin>>wybor;
							}
					}
					break;
					case 7:																																//rozwiazywanie rownanai
					{
						cout<<"\nAX + B = C"<<endl;
						if(A.istnieje && B.istnieje && C.istnieje)
						{
							rozwiazywanieRownania(A,B,C,D,E,F);
							drukujMacierz(F);
						}
						else
							cout<<"Macierze nie istnieja!!";

					}
					break;
				}
	}

	return 0;
}
