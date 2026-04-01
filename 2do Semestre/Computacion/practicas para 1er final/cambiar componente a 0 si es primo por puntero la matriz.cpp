/* 1)	Leer dos números enteros y positivos n y m mayor que 2 y menor a 19, valide. Leer los componentes de la 
matriz en notación de punteros, luego cambiar el componentes de la matriz a 0 si es un numero primo, vuelva a imprimir
 la matriz con notación de punteros. */
 #include<iostream>
#include<stdlib.h>
using namespace std;

main()
{
	int m, n, i, j;
	int *puntero;
	cout<<"ingrese m y n de la matriz: \n";cin>>m;cin>>n;cout<<endl;
	int mat[m][n];
	puntero=&mat[0][0];
	
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
		{
			cout<<"elemento["<<i+1<<"]["<<j+1<<"]:";
			cin>>*(puntero+i+j*n);
		}
	}	
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
		{
			cout<<"\t"<<*(puntero+i+j*n);
		}
		cout<<endl;
	}	

	
	
	
	
	
system("pause>null");
}

