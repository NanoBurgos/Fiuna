/* 5)	Determinar si un número entero positivo es par o impar con dos funciones que se llaman mutuamente. */
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int par(int);
int impar(int);
main(){
	int a, r;
	cout<<"introduzca un numero "; cin>> a;
	r=par(a);
	if(r==1)
	{cout<<" el numero es par\n";}
	else
	{ cout<<" el numero es impar\n";}
	system("pause>null");
}
int par(int a)
{
	if(a==0)
	{	return 1; }
	else
	{   return impar( a-1); }	
}
int impar(int a)
{
	if(a==0)
	{ return 0;}
	else
	{ return par(a-1);}
}

