#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int IntegerPower(int, int) ;
main ()
{
	int a, b,c;
	cout<<"intoduzca la base ";
	cin>>a;
	cout<<"introduza el exponente ";
	cin>>b;
	 while (a<=0)
	 { 
	 cout<<"intoduzca la base ";
	cin>>a;
	 }
	  while (b<=0)
	 { 
	 cout<<"intoduzca la base ";
	cin>>b;
	 }
	 
	 cout<<"la expresion de "<<a<<"^"<<b<<" = "; c= IntegerPower(a, b); cout<<" es "<<c;
	 system("pause>null") ;
}
int IntegerPower(int a, int b)
{
	float d=1, i, n;
	for(i=1; i<=b;i++)
	{
		d=d*a;
		if (i==1)
			{cout<<a;	}
		else{ cout<<"*"<<a;}
	}
	return d;
} 
