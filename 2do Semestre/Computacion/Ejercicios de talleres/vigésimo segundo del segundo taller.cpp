/* Cargue una matriz de oden mxn cuyos componentes deben ser enteros y positivos.
Luego imprima la matriz leída y a continuación imprima la misma matriz pero
reemplaznado por 0 (cero) los componentes que son números primos */
#include<iostream>
using namespace std;
int primo(int a);
int validacion();
int main ()
{
	float m, n;
	cout<<"Introduzca el numero m de filas de la matriz: "; cin>>m;
	while(m!=int(m)||m<=0)
	{
		cout<<"\nRecuerde que el numero de filas debe ser un numero entero y positivo.";
		cout<<"\nVuelva a introducir el numero m de filas: "; cin>>m;
	}
	cout<<"\n\nIntroduzca el numero n de columnas de la matriz: "; cin>>n;
	while(n!=int(n)||n<=0)
	{
		cout<<"\nRecuerde que el numero de columnas debe ser un numero entero y positivo.";
		cout<<"\nVuelva a introducir el numero n de columnas: "; cin>>n;
	}cout<<"\n\n";
	int i, j, A[int(m)][int(n)];
	// introduciendo los elementos de A
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\nIntroduzca el elemento ["<<i<<"]["<<j<<"]: "; A[i][j]=validacion();
		}
	}
	// imprimiendo A
	cout<<"\n\nLa matriz con los elemntos introducidos es:\n";
	for(i=0;i<m;i++)
	{cout<<"\n\t\t";
		for(j=0;j<n;j++)
		{
			cout<<A[i][j]<<"   ";
		}cout<<"\n";
	}
	//imprimendo la matriz A con sus elementos cambiados
	cout<<"\nLa matriz con los elementos cambiados es:\n";
	for(i=0;i<m;i++)
	{cout<<"\n\t\t";
		for(j=0;j<n;j++)
		{
			cout<<primo(A[i][j])<<"   ";
		}cout<<"\n";
	}
	system ("pause");
}
int validacion()
{
	float n;
	cin>>n;
	while(n!=int(n)||n<=0)
	{
		cout<<"\nRecuerde que el componente debe ser entero y positivo";
		cout<<"\nVuelva a introducir el componente:		"; cin>>n;
	}
	return n;
}
int primo(int a)
{
	int i=1;
	if(a!=1)
	{
	while(i<=a)
	{
		i++;
		if(a%i==0&&a==i)
		{i=a+1;}
		if(a%i==0&&a!=i)
		{i=a+2;}
	}
	if(i==a+1)
	a=0;}
	return a;
}

