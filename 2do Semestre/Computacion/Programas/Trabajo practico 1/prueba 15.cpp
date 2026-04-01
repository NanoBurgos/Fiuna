#include<iostream>
using namespace std;
int main ()
{
float a, b, c, d;
int i, mayor=1;
do {
    cout << "Introduce un numero entero y positivo";
    cout << "\t\n1) ";cin >> a;
    }
while (a<0 || int(a)!=a);
do {
    cout << "\nIntroduce otro numero entero y positivo";
    cout << "\t\n2) ";cin >> b;
    }
while (b<0 || int(b)!=b);
do {
    cout << "\nIntroduce otro numero entero y positivo";
    cout << "\t\n3) ";cin >> c;
    }
while (c<0 || int(c)!=c);
do {
    cout << "\nIntroduce un ultimo numero entero y positivo";
    cout << "\t\n4) ";cin >> d;
    }
while (d<0 || int(d)!=d);

a=int(a); b=int(b); c=int(c); d=int(d);

do{ mayor = mayor+1;}while(mayor<a);
do{ mayor = mayor+1;}while(mayor<b);
do{ mayor = mayor+1;}while(mayor<c);
do{ mayor = mayor+1;}while(mayor<d);

cout <<mayor;


system("pause");
return 0;
}
