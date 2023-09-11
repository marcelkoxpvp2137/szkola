#include <iostream>
#include <string>
#include <math.h>
using namespace std;

string liczba;
int y=0, wynik=0;

int pierwsza(int wynik)
{
    if(wynik<2)
    {
        cout<<"Liczba nie jest pierwsza";
        return 0;
    }
    for (int i = 2; i < wynik; i++)
    {
    if (wynik % i == 0)
    {
        cout<<"Liczba nie jest pierwsza";
        return 0;
    }

    }
    cout<<"Liczba jest pierwsza";
    return 0;

}
int main ()
{
    do
    {
        cout<<"Podaj liczbe maksymalnie 6 cyfrowa"<<endl;
        cin>>liczba;
    }
    while(liczba.length()>6);

y = stoi(liczba);

    do
    {
        wynik=wynik+y%10;
        y=y/10;
    }
    while(y!=0);

    cout<<pierwsza(wynik);
}

