#include<iostream>
using namespace std;
int main ()
{
float a, b, c, d,t1, t2, t3, min1, min2, max1, max2,max3;
int m2, m1,m;
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

if (a<b)
   {t1=a; a=b ; b=t1;}
  max1=a*b;
 m=int(a)%int(b);
  while (m!=0){a=b; b=m;  m=int(a)%int(b);}
   min1=b;
  max1=max1/min1 ;
   
if (c<d)
   {t2=c; c=d ; d=t2;}
 max2=c*d;
 m2=int(c)%int(d);
  while (m2!=0){c=d; d=m2;  m2=int(c)%int(d);}
   min2=d;
   max2=max2/min2;
  if (min1<min2)
   {t3=min1; min1=min2 ; min2=t3;}
 max3=min*max2;
 m1=int(min1)%int(min2);
  while (m!=0){min1=min2; min2=m1;  m1=int(min1)%int(min2);}
    max3=max3/min2;
    cout<< "\t\nEl minimo es: " << min2 << "\n\n";
  cout<< "\t\nEl maximo es: " << max3 << "\n\n";

system("pause");
return 0;
}
