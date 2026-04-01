/* 6)	Dada una matriz A de tamaño m*n, obtener un vector B que contenga los menores elementos de cada fila.  */

#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{
	int m, n, i, j, *puntero;
	cout<<"introduzca m y n de la matriz: "; cin>> m; cin>>n;
	int mat[m][n];
	puntero=&mat[0][0];
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
		{
			cout<<"componente["<<i+1<<"]["<<j+1<<"]: ";
			cin>> *(puntero+i+j*m);	
		}
	}
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++)
		{
			cout<<"\t"<<*(puntero+i+j*m);					
		}
		cout<<endl;
	}
	
	int vect[m];
	
	for(i=0;i<m;i++)
	{
		vect[i]=*(puntero+i);
	}
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(vect[i]>= *(puntero+i+j*n))	
				{
					vect[i]= *(puntero+i+j*n);
				}			
			}
		}
		
	cout<<"el vector buscado es: "<<endl;
	for(i=0;i<m;i++)
	{
		cout<<"\t"<<vect[i];
	}
	cout<<endl;
	
	system("pause");
}
