/* 3)	Escriba una función recursiva de power(base, exponente)  que al ser invocada regrese base exponente  Ejemplo power (3, 4)  3*3*3*3 = 81
base exponente =    Base                                     si exponente = 1
base exponente =    Base*Base exponente -1         si exponente > 1
*/

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int power(int, int);
main()
{
	int a, b, potencia;
	cout<<"introduzca una base y el exponete\n"; 	cin>>a; cin>> b;
	potencia= power(a,b);
	cout<<"	la potencia es "<<potencia ;
	system("pause>null");
}
int power(int a, int b)
{
	if(b==1)
	{ cout<<a; return a ;	}
	if(b==0)
	{ return 1;	}
	else
	{
		cout<< a <<" x " ;
		return a *power(a,b-1);
	}
}
