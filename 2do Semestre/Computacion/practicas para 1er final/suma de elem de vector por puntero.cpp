/* 4)	Ingresar los elementos  un vector por teclado. Sumar sus elementos e imprimir  el vector con notación de punteros. */
#include<iostream>
#include<stdlib.h>
using namespace std;

main()
{
	int vector[5];
	int *puntero, i;
	puntero=&vector[0];
	for(i=0;i<5;i++)
	{
		cout<<"puntero["<<i+1<<"]:";
		cin>>*(puntero+i);
	}
	for(i=0;i<5;i++)
	{
		cout<<"\t"<<vector[i];
	}
	cout<<endl;
	
	int suma=0;
	for(i=0;i<5;i++)
	{
		suma=suma + *(puntero+i);
	}
	cout<<"la suma es: "<<suma<<endl;
	
	
	system("pause");
}
