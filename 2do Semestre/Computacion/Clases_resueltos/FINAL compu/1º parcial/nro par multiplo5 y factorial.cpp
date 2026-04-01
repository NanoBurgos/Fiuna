#include<iostream>
#include<stdlib.h>
using namespace std;
int main ()
{
	int i;
	float a,fac;
	cout<<"\n\t\tIngrese un numero entero, positivo y menor que 100";
	cout<<"\n\n\ta=";cin>>a;
	if(a<100&&a>0&&int(a)==a)
	{
	if((int)a%2==0&&(int)a%5==0)cout<<"\n\tEl numero es par y multiplo de 5\n\n";
	else
		{if((int)a%2==0)cout<<"\n\tEl numero es par\n\n";
	     if((int)a%5==0)cout<<"\n\tEl numero es multiplo de 5\n\n";}
	fac=1;
	for(i=1;i<=a;i++)
	{fac*=i;}
	cout<<"\n\n\tel factorial del numero es\t"<<fac;cout<<"\n\n\t\a";
	}
	else
		cout<<"\n\n\tEl numero ingresado no es valido\n\n";
		system("pause");}

