#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int factorial(int);
main()
{
	int a, respuesta;
	cout<<"ingrese un numero entero y positivo	";	cin>> a;
	respuesta= factorial(a);
	cout<<"	el factorial es "<<respuesta;
system("pause>null");	
}

int factorial(int a)
{
	if(a==0 or a==1 )
	{
		cout<<"1";	
		return 1;
	}
	else
	{
		cout<<a<<" x ";
		return a * factorial(a-1);
	}
}


