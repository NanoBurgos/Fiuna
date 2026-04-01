/*Leer tres números a,b y c, que son los coeficientes de la ecuación cuadrática ax2+bx+c=0. 
Determinar las raíces de dicha ecuación. Si el discriminante b2-4ac es negativo, 
imprimir las raíces conjugadas complejas de dicha ecuación.*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
main()
{
float a, b, c, x1, x2, d;
cout<<"Introduzca el coeficiente del termino cuadratico= ";cin>>a;
cout<<"Introduzca el coeficiente del termino lineal= ";cin>>b;
cout<<"Introduzca el coeficiente del termino independiente= ";cin>>c;
d=b*b-4*a*c;
if (d<0)
{d=-d;
cout<<"La primera raiz imaginaria es= x1="<<((-b)/(2*a))<<" + "<<(sqrt(d)/(2*a))<<"i";
cout<<"La segunda raiz imaginaria es= x2="<<((-b)/(2*a))<<" - "<<(sqrt(d)/(2*a))<<"i";
}
else
{x1=(-b+sqrt(d)/(2*a));
x2=(-b-sqrt(d)/(2*a));
cout<<"La primera raiz es= "<<x1;
cout<<"La segunda raiz es= "<<x2;
}
system("pause");}
