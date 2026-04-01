/* genere, al azar, un conjunto de 50 pares de números enteros no negativos (fil,col)
donde fil es menor o igual a 4 y col es menor o igual que 5, cuente cada par generado
en una matriz mat (fil,col) y luego imprima dicha matriz */
#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int main()
{
	int mat[4][5]; int x, i, j ;
	
	for(i=0;i<4;i++)
	{	for(j=0;j<5;j++){mat[i][j]=0;}	}
	cout<<"Los numeros generados son:\n";
	srand(time(NULL));
	for(x=0;x<50;x++)
	{	
		i=rand()%4;		j=rand()%5;		mat[i][j]=mat[i][j]+1; cout<<"N"<<x+1<<"= ("<<i<<","<<j<<")\n";
	}
	cout<<"La matriz pedida es:\n\n";
	for(i=0;i<4;i++)
	{
		cout<<"\n\n\t\t";
		for(j=0;j<5;j++){	cout<<mat[i][j]<<"     ";	}
	}cout<<"\n\n\n";
	system ("pause");
}
