/* 2)	Realizar dos funciones de suma de dos números
a)	Paso por valor (parámetros de las funciones) variables
b)	Paso por referencia(parámetro de las funciones) direcciones de variables
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

void sumavalor(int, int);
void sumareferencia(int&, int&);

main()
{
	int a, b;
	cout<<"introduzca los valores a y b: \n";
	cin>>a; cin>>b;
	cout<<endl;
	
	sumavalor(a,b);
	sumareferencia(&a,&b);
	
	
	system("pause");
}

void sumavalor(int a, int b)
	{
	float suma;
	suma= a+b;
	cout<<"la suma por valor  es: "<<suma<<endl;
	}

void sumareferencia(int&a, int&b)
{
	int suma2;
	suma2= &a + &b;
	cout<<"la suma por referencia es: "<<suma2<<endl;
	
}
