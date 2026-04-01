/* Cargue una matriz de nxn, determine si es una matriz simetrica o anti simétrica, luego
en caso de no ser ninguna de las anteriores, imprima en pantalla la transpuesta de
dicha matriz. */
#include<iostream>
using namespace std;
int main()
{
	float n;
	int i, j, x=0, y=0;
	cout<<"Introduzca el numero n de filas y columnas una matriz de nxn: "; cin>>n;
	while(n!=int(n)||n<=0)
	{
		cout<<"\n\nRecuerde que el numero n deber ser entero y positivo.";
		cout<<"Vuelva a introducir el numero n: "; cin>>n;
	}
	float a[int(n)][int(n)], b[int(n)][int(n)];
	// introduciendo los valores de la matriz a
	cout<<"\nIntroduzca los componentes de la matriz:";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\nintroduzca el componente ["<<i<<"]["<<j<<"]: "; cin>>a[i][j];
		}
	}
	//imprimiendo la matriz a
	cout<<"\nLa matriz con los componentes introducidos es:";
	for(i=0;i<n;i++)
	{cout<<"\n\t\t";
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<"   ";
		}cout<<"\n";
	}
	// sea b la matriz transpuesta de a
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	// comparando que tipo de matriz es a respecto a b
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(b[i][j]==a[i][j])
			{	x++;	}
			if(b[i][j]==-1*a[i][j])
			{	y++;	}
		}
	}
	if(x==int(n*n))
	{
		cout<<"\nLa matriz con los componentes introducidos es simetrica\n\n";
	}
	if(y==int(n*n))
	{
		cout<<"\nLa matriz con los componentes introducidos es anti simetrica\n\n";
	}
	if(x!=int(n*n) && y!=int(n*n))
	{
		cout<<"\nLa matriz con los componentes introducidos no es simetrica ni anti simetrica\ny su transpuesta es:";
		for(i=0;i<n;i++)
		{cout<<"\n\t\t";
			for(j=0;j<n;j++)
			{
				cout<<b[i][j]<<"   ";
			}cout<<"\n";
		}
	}
	system ("pause");
}
