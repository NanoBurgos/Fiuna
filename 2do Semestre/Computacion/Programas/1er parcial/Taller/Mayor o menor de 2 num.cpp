/*Leer un numero entero y positivo “n” y leer “n” números también enteros y positivos, 
luego imprimir el mayor y el menor de los números leídos.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
int n, i=2, a, b, aux=1, cangrejo=1;
cout<<"Introduzca la cantidad de numeros: ";cin>>n;
cout<<"Introduzca el primer numero: "; cin>>a;
aux=aux*a; cangrejo=cangrejo*a; 
while (i<=n)
{cout<<"Introduzca el siguiente numero: "; cin>>b;
if(aux<b)
{aux=b;}
if(cangrejo>b)
{cangrejo=b;}
i++;}
cout<<"El mayor numero es: "<<aux<<endl;
cout<<"El menor numero es: "<<cangrejo<<endl<<endl;
system("pause");}
