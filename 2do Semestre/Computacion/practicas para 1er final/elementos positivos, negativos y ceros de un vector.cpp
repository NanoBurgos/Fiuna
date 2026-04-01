//	Escribir un algoritmo que muestre la cantidad de números positivos, negativos y los ceros de un vector de 10 elementos.
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

main(){
	int vector[10];
	int i, positivo=0, negativo=0, cero=0;
	cout<<" Introduzca las componentes del vector\n";
	for(i=0;i<10;i++)
	{
		cout<<" componete["<<i+1<<"] = ";
		cin>>vector[i];
	}
	for(i=0;i<10;i++)
	{
		if(vector[i]>0)
		{positivo++; }
		if(vector[i]<0)
		{negativo++; }
		if(vector[i]==0)
		{cero++;     }
	}
	cout<<"la cantidad de elementos positivos es: "<<positivo<<endl;
	cout<<"la cantidad de elementos negativos es: "<<negativo<<endl;
	cout<<"la cantidad de elementos ceros es: "<<cero<<endl;

	system("pause>null");
}

