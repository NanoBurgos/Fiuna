/* 3)	Matriz sin componentes repetidas: Diseñar un programa en C/C++ que lea dos números enteros y positivos,
 m y n, a continuación declare una matriz mat de mxn componentes, luego vaya leyendo los componentes de a uno, 
 he impida que (durante la lectura de tales componentes) se introduzcan componentes repetidos. Por último se imprime la matriz en pantalla. */
#include<iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;

main()
{
	int m,n,i,j, comp, g,h;
	cout<<"ingrese las dimensiones de la matriz mxn:\n"; cin>>m; cin>>n;
	int mat[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<" componente ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>mat[i][j]; cout<<endl;
			
		
			// para comparar
			for(g=0;g<m;g++)
			{
				for(h=0;h<n;h++)
				{
				    while(mat[i][j]==comp)
					{cout<<"el valor introducido ya existe, por favor vuelva a ingresar otro valor\n";
					  cout<<"componente ["<<i+1<<"]["<<j+1<<"]: ";
					  cin>>mat[i][j]; cout<<endl;
					}		
				}
		
			}
				comp=mat[i][j];	
		}
	
	}	
	
	//para imprimir
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<mat[i][j]; 
		}
		cout<<endl;	
	}
	
	system("pause");
}

