#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	float a,g;
	int i;
	cout<<"Ingrese un nro entero y positivo ";
	cin>>a;
	while (a<0 and a!=int(a))
	{
		cout<<"\nIngrese un nro entero y positivo";
		cin>>a;
	}
	for(i=2;i<a;i++)
	{
		if (int(a)%i==0)
		{
			g++;
		}
	}
	if (g>1)
	{
		cout<<"El nro no es primo";
	}
	else 
	{
		cout<<"\nEl nro es primo";
	}
}
