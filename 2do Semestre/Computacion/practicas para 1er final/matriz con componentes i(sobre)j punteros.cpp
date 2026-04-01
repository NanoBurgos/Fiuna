//introducir myn dimensiones de la matriz entero y positivo, mayor a 2 y menor o igual a 30; introducir una matriz de 
// cuyos elementos sean la division de i por j obs, cuando se divide entre 0 se toma como divisor 50, imprimir por punteros

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int validar(); // se deja en blanco () porque recien detro de la funcion se ingresa el numero, y se realiza la operacion
float componente (); // no como en otros casos que primero se llama la funcion dandole previamente los numeros

main()
{
	int m, n, i, j;

	m= validar() ; n=validar()	; // se hace este metodo por que hay contradicciones para ingresar los valores en la matriz si se mete direcamnete
									// float m porque las demenciones deben ser enteras si o si 
	float a,b,f;
	float mat[m][n];
	float *ptr; // puntero
	ptr= &(mat[0][0]);
	// introduciendo datos de la matriz
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"componente["<<i<<"]["<<j<<"]: ";		
			mat[i][j]=  componente();
			cout<< mat[i][j]<<endl;
		}
	}
	
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			
		}
	}
	
	
	
	system("pause>null");
}

int validar()
{
	float x;
	cout<<"intruzca la dimension m y n \n";
	cin>> x; 
	while (x!=int(x) or x<0 or x<=2 or x>31)
	{
		cout<<"intruzca la dimension entera y positiva, mayor a 2 y menor o igual a 30 \n";
		cin>> x; 
	}
	 return x;
}
float componente()
{
	
	float k, l, comp; //k=i, l=j
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			//if(l==0)
			//{
			comp= 5*5;
			//return comp;
			//}
			//else
			//{
			//comp= 3*3;
			//return comp;
			//}
			
		}
	}
	return comp;
}
