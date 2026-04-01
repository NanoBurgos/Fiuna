#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float a,b,p,p2,d;
	cout<<"Introduzca 2 nros (el primero sera el lado distinto de un \n triangulo isosceles y el segundo los lados iguales ";
	cin>>a;
	cin>>b;
	while (a<=0 or a!=int(a))	
{
cout<<"\nEl nro A debe ser entero y positivo ";
	cin>>a;
}
while (b<=0 or b!=int(b))	
{
cout<<"\nEl nro B debe ser entero y positivo ";
	cin>>b;
}
while (a>=b*2)
{
	cout<<"\nLos nros no son validos como lados de un triangulo introduzca denuevo ";
	cin>>a;
	cin>>b;
}
	p=2*b+a;
	p2=p/2;
	d=sqrt(p2*(p-a)*(p-b)*(p-b));
	cout<<"\nEl perimetro es "<<p;
	cout<<"\nEl area es "<<d;
	system("pause>null");
	return 0;
}
