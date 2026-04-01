/*Leer un número entero y positivo “n” y luego leer n números enteros. De los números leídos, 
identificar e imprimir, los números que estén entre 25 y 50 (intervalo cerrado). 
Al final del programa imprimir la media geométrica de los números que cumplen dicha condición.*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
main()
{int n, i=1;
float a, aux=1, mg, k=0;
cout<<"Introduzca la cantidad de numeros: "; cin>>n;
while(i<=n)
           {cout<<"\nIntroduzca un numero: "; cin>>a;
           if(a>=25 && a<=50) 
           {cout<<"\n"<<a<< " esta entre 25 y 50 (intervalo cerrado)\n"; aux=aux*a; k++;}
           i++;}
mg=pow(aux, 1./k);
cout<<"\n\nLa media geometrica de los numeros entre 25 y 50 es: "<<mg<<"\n\n";
system("pause");}
