/* Lea e imprima dos numerose enteros y positivos M y N, agregue una fila a 
una matriz de MxN cuyos elemntos son los mayores de las columnas y una columna
cuyos elmentos son los menores de las filas. El último elemnto de la matriz
ampliada debe ser la suma del menor elemento de la última fila y el mayor
elemnto de la última columna de la matriz ampliada*/
#include<iostream>
using namespace std;
int main ()
{
    float m, n;
    cout<<"intrroduzca el numero de filas M(mayor a 2) de una matriz A: "; cin>>m;
    while(m!=int(m)||m<3)
    {cout<<"\nrecuerde que la cantidad de filas debe ser entera y mayor a 2";
    cout<<"\nvuelva a introducir la cantidad de filas M: "; cin>>m;}
    cout<<"\nintrroduzca el numero de columnas N(mayor a 2) de una matriz A: "; cin>>n;
    while(n!=int(n)||n<3)
    {cout<<"\nrecuerde que la cantidad de columnas debe ser entera y mayor a 2";
    cout<<"\nvuelva a introducir la cantidad de columnas N: "; cin>>n;}
    
    float A[int(m)][int(n)];
    int i, j;
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cout<<"\nIntroduzca el elemento ["<<i<<"]["<<j<<"]: "; cin>>A[i][j];
                    }
    }
    cout<<"\n\nLa matriz A es:";
    for(i=0;i<m;i++)
    {
                    cout<<"\n\t\t";
                    for(j=0;j<n;j++)
                    {
					cout<<A[i][j]<<"   ";
					}
    }
    // ampliando de la matriz A
    float mat[int(m)+1][int(n)+1], mayor, menor;
    cout<<"\n\nLa matriz ampliada es:\n\n";
    int x,y;
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
					mat[i][j]=A[i][j];
					}
    }
    //seleccion de los mayores elemntos de las columnas
    i=int(m);
    for(j=0;j<=n;j++)
    {
                     mayor=A[0][j];
                     for(x=0;x<m;x++)
                     {
					    if(mat[x][j]>mayor)
					 	{
						 mayor=mat[x][j];
						}
					 }       
    mat[i][j]=mayor;                 
    }
    //seleccion de los menores elemntos de las filas
    j=int(n);
    for(i=0;i<=m;i++)
    {
                     menor=A[i][0];
                     for(y=0;y<n;y++)
                     {   if(mat[i][y]<menor)
					 {menor=mat[i][y];}}
    mat[i][j]=menor;
    }
    //seleccion del ultimo elemtor de la matriz
    //seleccionando el menor elemnto de la ultima fila
    menor=mat[int(m)][0];
    i=int(m);
    for(j=0;j<n;j++)
    {   
	if(mat[i][j]<menor)
	{menor=mat[i][j];}
	}
    //seleccionando el mayor elmento de la ultima columna
    mayor=mat[0][int(n)];
    j=int(n);
    for(i=0;i<m;i++)
    {
	   if(mat[i][j]>mayor)
	   {mayor=mat[i][j];}
	}
    mat[int(m)][int(n)]=mayor+menor;
    //imprimir la matriz ampliada
    cout<<"\n\nLa matriz ampliada de A es:";
    for(i=0;i<m+1;i++)
    {
                    cout<<"\n\t\t";
                    for(j=0;j<n+1;j++)
                    {
					cout<<mat[i][j]<<"   ";
					}
    }      
    cout<<"\n\n\n";
    system ("pause");
}
