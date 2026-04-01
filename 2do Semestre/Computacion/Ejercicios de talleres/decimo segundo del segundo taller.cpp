/* Lea e imprima un número entero n, mayor que 2 y menor o igual que 50, luego cargue
un vector vect con n números enteros comprendidos entre 1 y 1000, inclusives,
generados al azar (utilice la función semilla) e imprima vect con las componentes
ordenadas en secuencia ascendente, separando los números impares que deben ocupar
los primeros lugares y seguido de los pares, también en secuencia ascendente. */
#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int main()
{
	float n;
	cout<<"Introduzca un numero que sera la cantidad de componentes de un vector:";
	cout<<"\nEl numeor debe ser entero, mayor que y menor o igual a 50: "; cin>>n;
	while(n!=int(n)||n<3||n>50)
	{
		cout<<"\nRecuerde que el numeor debe ser entero, mayor que y menor o igual a 50";
		cout<<"\nVuelva a introducir el numero n: "; cin>>n;
	}
	int vect[int(n)], aux[int(n)], i, j, menor, lugar, par=0, imp=0;
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		vect[i]=rand()%998+2;
	}
	// imprimiendo el vector vect
	cout<<"\nEl vector es: { "<<vect[0];
	for(i=1;i<n;i++)
	{
		cout<<", "<<vect[i];
	}
	cout<<" }\n\n";
	// para determinar la cantidad de numeos pares e impares en el vector
	for(i=0;i<n;i++)
	{
		if(vect[i]%2==0)
		{
			par++; aux[int(n)-par]=vect[i];
		}
		else
		{
		aux[imp]=vect[i];	imp++; 
		}
	}
	// ordenando los elementos del vecto aux
	// ordenando los elementos impares
	for(i=0;i<imp;i++)
	{
		menor=aux[i]; lugar=i;
		for(j=i;j<imp; j++)
		{
			if( aux[j]<menor){ menor=aux[j]; lugar=j;	}
		} aux[lugar]=aux[i]; aux[i]=menor;
	}
	// ordenando los elementos pares
	for(i=imp;i<n;i++)
	{
		menor=aux[i]; lugar=i;
		for(j=i;j<n; j++)
		{
			if( aux[j]<menor){ menor=aux[j]; lugar=j;	}
		} aux[lugar]=aux[i]; aux[i]=menor;
	}
	//igulando vect a aux
	for(i=0;i<n;i++)
	{
		vect[i]=aux[i];
	}
	// imprimiendo el vector ordenado
	cout<<"\nEl vector ordenado es: { "<<vect[0];
	for(i=1;i<n;i++)
	{
		cout<<", "<<vect[i];
	}
	cout<<" }\n\n";
	system ("pause");
}
