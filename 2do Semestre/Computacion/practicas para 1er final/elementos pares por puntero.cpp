// Escribir una función contpar(int *a, int tam) que recibe un vector y su tamaño, y devuelve el número de elementos pares del arreglo.

#include<iostream>
#include<stdlib.h>
using namespace std;
int contpar(int*, int);
main()
{
	int *puntero,i,par,n;
	cout<<"introduzca el tamanho del vector: ";
	cin>>n;
	int vector[n];
	for(i=0;i<n;i++)
	{
		cout<<"componente["<<i+1<<"]:";
		cin>>vector[i];
	}
	cout<<"el vector es:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<vector[i];
	}
	cout<<endl;
	par=contpar(vector,n);
	cout<<"cantidad de elementos pares:"<<par<<endl;
	
system("pause")	;
}

int contpar(int*puntero, int n)
{
	int i, contar=0;
	for(i=0;i<n;i++)
	{
		if(*(puntero +i)%2==0)
			{
				contar++;
			}
	}
	return contar;
}
