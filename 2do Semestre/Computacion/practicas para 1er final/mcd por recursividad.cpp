/* 4)	Hallar el MCD de dos números enteros y positivos. El procedimiento clásico es para obtener es el por divisiones sucesivas. 
mcd(m,n)                 es n si  n<= m y n divide a m;
mcd(m,n)	         es mcd(n,m)  si n>m
mcd(m,n)                 es mcd(n, resto de m dividido n)
Ejemplo   m.c.d. (164,72) = 4	*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int mcd(int, int);
main()
{
	int a, b, maximo;
	cout<<"introduzca dos numeros\n"; cin>>a;cin>>b;
	maximo= mcd(a,b);
	cout<<"el maximo comun divisor de los numros es "<<maximo;
	system("pause>null");
}
int mcd(int a, int b)
{
	if(a<=b and a%b==0)
	{ return b; }
	if(b<a)
	{ return mcd(b,a);}
	else
	{
		mcd(a, b%a);
		
	}
}
