/* 2)	Hallar el producto de dos números naturales de modo recursivo.
a*b = a                 si  b== 1
a*b= a* (b-1)+a         si   b>1 										*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int producto(int, int);
main()
{
	int a, b, resp;
	cout<<"ingrese dos numeros a y b respect. \n ";
	cin>>a; cin>> b;
	resp= producto(a,b);
	cout<<"el producto de los numeros es "<< resp;

	system("pause>null");
}
int producto(int a, int b)
{
	if(b==1)
	{
		return a;	
	}
	if(b>1)
	{
		return producto(a,b-1) +a	;
	}
}

