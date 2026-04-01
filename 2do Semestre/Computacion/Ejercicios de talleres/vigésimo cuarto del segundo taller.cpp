/* Permita la carga e impresión en pantalla de una matriz de números reales de orden
mxn, y determine e imprima en pantalla la posción de los puntos de silla, siempre y
cuando existan. Obs: Un punto de silla de una matriz, es un elemento de la misma, tal
que, es el menor de su fila y el mayor de su columna. */
#include<iostream>
using namespace std;
int columna(float *a, int i, int j, int m, int n );
int fila(float *a, int i, int j, int m, int n);
int main()
{
	float m, n;
	cout<<"Introduzca el numero m de filas: "; cin>>m;
	while(m!=int(m)||m<=0)
	{
		cout<<"\nEl numero de filas debe ser entero y positivo.";
		cout<<"Vuelva a introducir el numero m de filas: "; cin>>m;
	}
	cout<<"Introduzca el numero n de columnas: "; cin>>n;
	while(n!=int(n)||n<=0)
	{
		cout<<"\nEl numero de columnas debe ser entero y positivo.";
		cout<<"Vuelva a introducir el numero n de columnas: "; cin>>n;
	}
	// declarando la matriz mat
	float mat[int(m)][int(n)]; int i, j, aux=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\nIntroduzca el elemento ["<<i<<"]["<<j<<"]: "; cin>>mat[i][j];
		}
	}
	// imprimiendo la matriz mat
	for(i=0;i<m;i++)
	{cout<<"\n\t\t";
		for(j=0;j<n;j++)
		{
			cout<<mat[i][j]<<"   ";
		}cout<<"\n";
	}
	// imprimiendo los puntos silla
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(fila(&mat[0][0],i,j,int(m),int(n))==0 && columna(&mat[0][0],i,j,int(m),int(n))==0)
			{
				if(aux==0)
				{cout<<"\nLos puntos silla de la matriz son:";aux=1;}
				cout<<"\n"<<mat[i][j]<<"  En la posicion: ("<<i<<","<<j<<")\n";
			}
		}
	}
	system ("pause");
}
int columna(float *a, int i, int j, int m, int n )
{
	int x, valid=0;
	for(x=0;x<m;x++)
	{
		if(*(a + j +n*x)>*(a + j + n*i))
		{	valid=1;	}
	}
	return valid;
}
int fila(float *a, int i, int j, int m, int n)
{
	int x, valid=0;
	for(x=0;x<n;x++)
	{
		if(*(a + x + n*i)<*(a + j + n*i))
		{	valid=1;	}
	}
	return valid;
}











