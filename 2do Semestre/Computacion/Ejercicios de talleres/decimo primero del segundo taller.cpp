/* Que acepte como entrada dos números enteros y positivos M y N y una matriz de
componente numericas de punto flotante, de orden MxN e imprima la matriz dada ampliada
con una fila que contenga la la suma de los elementos de las columnas correspondientes
de la matriz */
#include<iostream>
using namespace std;
int main()
{
	float m, n, suma;
	int i, j;
	cout<<"\nIntroduzca un numero M entero y positivo: "; cin>>m;
	while(m<=0||m!=int(m))
	{
		cout<<"\n\nRecuerde que el numero introducido debe ser entero y positivo.\n";
		cout<<"Vuelva a introducir el valor de M"; cin>>m;
	}
	cout<<"\nIntroduzca un numero N entero y positivo: "; cin>>n;
	while(n<=0||n!=int(n))
	{
		cout<<"\n\nRecuerde que el numero introducido debe ser entero y positivo.\n";
		cout<<"Vuelva a introducir el valor de N"; cin>>n;
	}
	
	
	cout<<"\n\nIntroduca los elemntos de un matriz de orden MxN\n";
	
	float A[int(m)][int(n)];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\nIntroduzca el elmento ["<<i<<"]["<<j<<"]: "; cin>>A[i][j];
		}
	}
	
	cout<<"\nLa matriz A de orden MxN es:";
	
	for(i=0;i<m;i++)
	{
		cout<<"\n\n\t";
		for(j=0;j<n;j++)
		{
			cout<<A[i][j]<<"    ";
		}
	}
	
	cout<<"\n\nLa matriz ampliada de A es:";
	
	float B[int(m)+1][int(n)];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			B[i][j]=A[i][j];
		}
	}
	
	for(j=0;j<n;j++)
	{
		suma=0;
		for(i=0;i<m;i++)
		{
			suma=suma+B[i][j];
		}
		B[int(m)][j]=suma;
	}
	
	for(i=0;i<m+1;i++)
	{
		cout<<"\n\n\t";
		for(j=0;j<n;j++)
		{
			cout<<B[i][j]<<"    ";
		}
	}
	
	cout<<"\n\n\n";
	system ("pause");
}

