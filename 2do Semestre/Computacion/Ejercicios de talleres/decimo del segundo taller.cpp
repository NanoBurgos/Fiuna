/* Que permita leer una matriz de orde MxN de componentes enteras, e imptrima luego otra matriz 
B también de orden MxN, cuyos elementos son iguales al triple de los correspondientes elementos
de A o al doble de los mismos, segun estos sean pares o impares */
#include<iostream>
using namespace std;
int valid();
int par(float a);
int main()
{
	float m, n;
	int i, j;
	cout<<"Introduzca el numero M de filas de una matriz: "; cin>>m;
	while(m!=int(m)||m<=0)
	{
		cout<<"\n\nRecuerde que el numero de filas debe ser entero y positivo";
		cout<<"\nVuelva a introducir el numero de filas: "; cin>>m;
	}
	cout<<"Introduzca el numero N de columnas de una matriz: "; cin>>n;
	while(n!=int(n)||n<=0)
	{
		cout<<"\n\nRecuerde que el numero de columnas debe ser entero y positivo";
		cout<<"\nVuelva a introducir el numero de columnas: "; cin>>n;
	}
	float A[int(m)][int(n)];
	// cargando la matriz A
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\nIntroduzca el elemento ["<<i<<"]["<<j<<"]: "; A[i][j]=valid();
		}
	}
	// imptrimiendo la matriz A
	cout<<"\nLa matriz A de orde MxN es:\n";
	for(i=0;i<m;i++)
	{
		cout<<"\n\t\t";
		for(j=0;j<n;j++)
		{
			cout<<A[i][j]<<"   ";
		}
		cout<<"\n";
	}
	// creando la matriz B
	float B[int(m)][int(n)];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			B[i][j]=par(A[i][j]);
		}
	}
	// imprimiendo la matriz B
	cout<<"\nLa matriz B de orde MxN es:\n";
	for(i=0;i<m;i++)
	{
		cout<<"\n\t\t";
		for(j=0;j<n;j++)
		{
			cout<<B[i][j]<<"   ";
		}
		cout<<"\n";
	}
	system ("pause");
}
int valid()
{
	float n;
	cin>>n;
	while(n!=int(n))
	{ cout<<"Error. el elemento debe ser entero\nIntroduzca nuevamente el elemento:  "; cin>>n;	}
	return n;
}
int par(float a)
{
	if(int(a)%2==0)
	{	a=3*a;	}
	else
	{	a=a*2;	}
	return a;
}
