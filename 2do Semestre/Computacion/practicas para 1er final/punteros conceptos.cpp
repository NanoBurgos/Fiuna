/*  a)	Definir un puntero a entero.
b)	Definir una variable entera "n=10".
c)	Apuntar el puntero al entero "n".
d)	Imprimir el valor de "n".
e)	Imprimir la dirección de "n".
f)	Imprimir el valor del puntero.
g)	Imprimir la dirección del puntero.
h)	Imprimir la  desreferencia o indirección del puntero.
i)	Modificar el valor de "n" a través del puntero e imprimir el valor de "n";
*/
#include<iostream>
#include<stdlib.h>
using namespace std;

main()
{
	int *puntero;
	int n=10;
	puntero = &n;
	cout<<"el valor de n es: "<<n<<endl;
	cout<<"la direccion de n es: "<<&n<<endl;
	cout<<"el valor del *puntero es:"<<*puntero<<endl;
	cout<<"la direccion del puntero es: "<<puntero<<endl;
	cout<<"La desrreferencia de *puntero:"<<*puntero<<"\n";
       
	   *puntero = 15;
	   cout<<"el nuevo valor de n a travez del puntero es: "<<n<<endl;

	
	
	system("pause>null");

}
