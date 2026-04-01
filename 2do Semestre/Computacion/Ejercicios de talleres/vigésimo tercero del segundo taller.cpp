/* Genere, al azar, u conjuno de 60 números no negativos menores que 1000,
los cargue consecutivamente, en el orden en que son generados, en una matriz de 10x6
y determine e imprima un valor central de los mismos, es decir un n'mero entero o
fraccionario med, que separe al conjunto de datos en dos sub conjuntos de igual 
número de elementos, el primero constituido por los números menores que med y
es segundo por los mayores de med */
#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int main()
{
	int mat[10][6], *p, i, j, menor, lugar; float med;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		for(j=0;j<6;j++)
		{
			
			mat[i][j]=(rand()%1000);
		}
	}
	// imprimiendo la matriz de componentes aleatorios
	cout<<"La matriz de componentes aleatorios comprendidos entre 0 y 1000 es:\n";
	for(i=0;i<10;i++)
	{cout<<"\n\t\t";
		for(j=0;j<6;j++)
		{
			cout<<mat[i][j]<<"   ";
		}cout<<"\n";
	}
	p=&mat[0][0];
	// ordenando la matriz para tener el med
	for(i=0;i<60;i++)
	{
		menor=*(p+i); lugar=i;
		for(j=i;j<60; j++)
		{
			if( *(p+j)<menor){ menor=*(p+j); lugar=j;	}
		} *(p+lugar)=*(p+i); *(p+i)=menor;
	}
	med=(*(p+29)+*(p+30))/2;
	cout<<"\nEl valor central de los elementos de la matriz es: "<<med<<"\n\n";
	cout<<"\n\nEl sub conjunto de los numeros menores al valor central es:";
	for(i=0; i<30; i++)
	{
			cout<<"\nn"<<i+1<<"= "<<*(p+i);
	}
	cout<<"\n\nEl sub conjunto de los numeros mayores al valor central es:\n";
	for(i=30; i<60; i++)
	{
			cout<<"n"<<i-29<<"= "<<*(p+i)<<endl;
	}
	system ("pause");
}
