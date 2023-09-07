#include <iostream>
#include <cmath>
using namespace std;
int ax, ay;
int bx, by;
int cx, cy;
float dab, dac, dbc;
float funkcja(int x1,int y1, int x2, int y2)
{
    return sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}
int main()
{
cout<<"Podaj wspolrzedne punktu AX ";
cin>>ax;
while(ax>9 || ax<0)
{
    cout<<"Podaj liczbe z przedzialu <0,9>"<<endl;
    cin>>ax;
}
cout<<"Podaj wspolrzedne punktu AY ";
cin>>ay;
while(ay>9 || ay<0)
{
    cout<<"Podaj liczbe z przedzialu <0,9>"<<endl;
    cin>>ay;
}
cout<<"Podaj wspolrzedne punktu BX ";
cin>>bx;
while(bx>9 || bx<0)
{
    cout<<"Podaj liczbe z przedzialu <0,9>"<<endl;
    cin>>bx;
}
cout<<"Podaj wspolrzedne punktu BY ";
cin>>by;
while(by>9 || by<0)
{
    cout<<"Podaj liczbe z przedzialu <0,9>"<<endl;
    cin>>by;
}
cout<<"Podaj wspolrzedne punktu CX ";
cin>>cx;
while(cx>9 || cx<0)
{
    cout<<"Podaj liczbe z przedzialu <0,9>"<<endl;
    cin>>cx;
}
cout<<"Podaj wspolrzedne punktu CY ";
cin>>cy;
while(cy>9 || cy<0)
{
    cout<<"Podaj liczbe z przedzialu <0,9>"<<endl;
    cin>>cy;
}

dab=funkcja(ax,ay,bx,by);
dbc=funkcja(bx,by,cx,cy);
dac=funkcja(ax,ay,cx,cy);

cout<<"Odleglosc AB wynosi "<<dab<<endl;
cout<<"Odleglosc BC wynosi "<<dbc<<endl;
cout<<"Odleglosc AC wynosi "<<dac<<endl;
}
