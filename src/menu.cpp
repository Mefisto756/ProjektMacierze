#include "../headers/header.hpp"

macierz A, B, C, D, E, F;

void MenuWypelnianie()
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
              cout<<"\nMacierz B istnieje!! Czy chcesz nadpisac dane? (y/n)"<<endl;
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
              cout<<"\nMacierz C istnieje!! Czy chcesz nadpisac dane? (y/n)"<<endl;
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

void MenuDrukujMacierz()
{
  char wybor = 'y';

  while(wybor=='y')
    {
      cout<<"Ktora macierz wyswietlic? (A,B,C):  ";
      cin >> wybor;
      switch (wybor)
      {
        case 'A':
        {
          if(A.istnieje)
            drukujMacierz(A);
          else
            {
              cout<<"\nMacierz A nie istnieje!!"<<endl;
            }
        }
        break;
        case 'B':
        {
          if(B.istnieje)
            drukujMacierz(B);
          else
            {
              cout<<"\nMacierz B nieistnieje!!"<<endl;
            }
        }
        break;
        case 'C':
        {
          if(C.istnieje)
            drukujMacierz(C);
          else
            {
              cout<<"\nMacierz C nieistnieje!!"<<endl;
            }
        }
        break;
      }
      cout<<"Wyswietlic inna macierz? (y/n)";
      cin>>wybor;
    }
}

void MenuDodawanieMacierzy()
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

void MenuMnozenieMacierzyXmacierz()
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
          mnozenieMacierzyXmacierz(A,A,D);
          cout<<"A x A = ";
        }
        break;
        case 'B':
        {
          mnozenieMacierzyXmacierz(A,B,D);
          cout<<"A x B = ";
        }
        break;
        case 'C':
        {
          mnozenieMacierzyXmacierz(A,C,D);
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
          mnozenieMacierzyXmacierz(B,A,D);
          cout<<"B x A = ";
        }
        break;
        case 'B':
        {
          mnozenieMacierzyXmacierz(B,B,D);
          cout<<"B x B = ";
        }
        break;
        case 'C':
        {
          mnozenieMacierzyXmacierz(B,C,D);
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
          mnozenieMacierzyXmacierz(C,A,D);
          cout<<"C x A = ";
        }
        break;
        case 'B':
        {
          mnozenieMacierzyXmacierz(C,B,D);
          cout<<"C x B = ";
        }
        break;
        case 'C':
        {
          mnozenieMacierzyXmacierz(C,C,D);
          cout<<"C x C = ";
        }
        break;
      }
    }
    break;
  }
  drukujMacierz(D);
}

void MenuWyznacznikaMacierzy()
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
            cout<<"Wyznacnzik A to "<<wyznacznikMacierzy(M, A.T);
          }
          else
            cout<<"Macierz A nie istnieje!!"<<endl;
        }
        break;
        case 'B':
        {
          if (B.istnieje) {
            cout<<"Wyznacnzik B to "<<wyznacznikMacierzy(M, B.T);
          }
          else
            cout<<"Macierz B nie istnieje!!"<<endl;
        }
        break;
        case 'C':
        {
          if (C.istnieje) {
            cout<<"Wyznacnzik C to "<<wyznacznikMacierzy(M, C.T);
          }
          else
            cout<<"Macierz C nie istnieje!!"<<endl;
        }
        break;
      }
      cout<<"\nPoliczyc kolejny wyznacznik? (y/n)";
      cin>>wybor;
    }
}

void MenuMacierzOdwrotna()
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
          if (A.istnieje)
          {
            macierzOdwrotna(A,D);
            cout<<"Macierz odwrotna A to ";
            drukujMacierz(D);
          }
          else
            cout<<"Macierz A nie istnieje!!"<<endl;
        }
        break;
        case 'B':
        {
          if (B.istnieje)
          {
            macierzOdwrotna(B,D);
            cout<<"Macierz odwrotna B to ";
            drukujMacierz(D);
          }
          else
            cout<<"Macierz B nie istnieje!!"<<endl;
        }
        break;
        case 'C':
        {
          if (C.istnieje)
          {
            macierzOdwrotna(C,D);
            cout<<"Macierz odwrotna C to ";
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

void MenuRozwiazywanieRownania()
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
