#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
main()

{
	int m, n, p, q, i, j;
	cout<<"introduzca la dimension de la matriz A m x n respectivamente : "<<endl; cin>>m ; cin>> n;
	cout<<"introduzca la dimension de la matriz B m x n respectivamente : "<<endl; cin>>p ; cin>> q;
if(n==p)
	{
	
	int matA[m][n]; // matriz A
	cout<<" matriz A: \n";
	for(i=0;i<m;i++) // ingresando las componentes    .. matriz A
	{
		for(j=0;j<n;j++)
		{
			cout<<"componente ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matA[i][j];
		}		
	}
	cout<<endl;
	cout<<" matriz B: \n";
	int matB[p][q]; // matriz B
	for(i=0;i<p;i++) // ingresando las componentes
	{
		for(j=0;j<q;j++)
		{
			cout<<"componente ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>matB[i][j];
		}
	}
	
	cout<<"la matriz A es : \n \n"; //impriendo la matriz A 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<matA[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"la matriz B es : \n \n"; //impriendo la matriz B
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			cout<<"\t"<<matB[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
	// operacion de multiplicacion
	int matC[m][p], r;
	for(i=0;i<m;i++) 
	{
		for(j=0;j<p;j++)
		{
			matC[i][j]=0;
			for(r=0;r<n;r++)
			{
				matC[i][j]= matC[i][j] + matA[i][r] * matB[r][j];
			}
			
		}
	}
	cout<<"la matriz C es : \n \n"; //impriendo la matriz A 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<matC[i][j]<<"\t";
		}
		cout<<endl;
		
	}
	}
	else
	{
	cout<<"la multiplicacion no puede ser realizada,  debe ser igual a p";
				
	}

	system("pause>null");
}
