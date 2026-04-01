/*Solicite al usuario que introduzca por teclado los valores de cada componente de una
matriz de dimensión 3 filas y 5 columnas, imprimir esta matriz. Ordene las componentes
de menor a mayor utilizando el metodo de selección con una función que reciba la matriz por
puntero, imprima esta matriz ordenada. realice con la matriz ordenada un intercambio de
filas (fila 2 y fila 3), imprima la matriz que ha ontercambiado de filas.*/
#include<iostream>
using namespace std;
void ordenamiento(float *a);
int main()
{
	int i, j;    float mat[3][5], aux;
	cout<<"introduzca los elementos de una matriz de 3 filas y 5 columnas\n\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{	cout<<"Introduzca el elemento ["<<i<<"]["<<j<<"]: "; cin>>mat[i][j];	cout<<"\n";	}
	}    
	cout<<"\n\nLa matriz con los elementos introducidos es:";
	for(i=0;i<3;i++)
	{
		cout<<"\n\n\t\t";
		for(j=0;j<5;j++){	cout<<mat[i][j]<<"     ";	}
	}	
	ordenamiento(&mat[0][0]);	
	cout<<"\n\nLa matriz con los elementos ordenados es:";
	for(i=0;i<3;i++)
	{
		cout<<"\n\n\t\t";
		for(j=0;j<5;j++){	cout<<mat[i][j]<<"     ";	}
	}	
	for(i=0;i<5;i++){	aux=mat[1][i]; mat[1][i]=mat[2][i]; mat[2][i]=aux;	}
	cout<<"\n\nLa matriz con las filas cambiadas es:";
	for(i=0;i<3;i++)
	{
		cout<<"\n\n\t\t";
		for(j=0;j<5;j++){	cout<<mat[i][j]<<"     ";	}
	}
	cout<<"\n\n\n";	
	system ("pause");
}
void ordenamiento(float *a)
{
      int i, j, lugar;
      float menor;
    for(i=0;i<15;i++)
    {
                     menor = *(a+i);
                     lugar=i;
                     for(j=i;j<15;j++)
                     {     if(*(a+j)<menor){   menor=*(a+j); lugar=j;   }          } 
                     *(a+lugar)=*(a+i);  *(a+i)=menor;   
    }
}
