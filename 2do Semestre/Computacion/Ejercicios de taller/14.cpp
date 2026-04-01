/*Leer un nro entero y positivo n y leer n nros tambien enteros y positivos luego imprimir el mayor y menor de los nros leidos*/
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float n,a,b,c,i,x,g=1;
do
{
cout<<"Introduce un nro entero, positivo y mayor a 1 ";
cin>>n;
}
while (n<=1 or n!=int(n));
for(i=1;i<=n;i++)
{
	cout<<"Ingrese un nro ";
	cin>>x;
	while (g==1)
	{
		a=x;
		b=x;
		c=x;
		g++;
	}
	if(a<x)
	{
		if(b>a)
		{ b=a;
		}
		if (c<x)
		{ c=x;
		}
	 }
	if(a>x)
	{
		if (b>x)
		{  b=x; }
		
		if (c<a)
		{ c=a; }
		
	}
	a=x;
}
cout<<"\nEl menor es "<<b;
cout<<"\nEl mayor es "<<c;
system("pause>null");
return 0;
}
