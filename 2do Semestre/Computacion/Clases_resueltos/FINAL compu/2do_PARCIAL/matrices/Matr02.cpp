/* Matr02: Escribir un programa en lenguaje C que:
Lea un número n y lo acepte sólo si es entero y positivo, en caso contrario, solicite nuevamente el
número n, hasta obtener uno entero y positivo, y los n×n elementos de la matriz cuadrada mat.
Imprima luego el número n, los elementos de la matriz mat y tres números r, s y t,
obtenidos, respectivamente, como la suma de los elementos de mat situados sobre la diagonal principal,
la suma de de los elementos de mat situados debajo de la diagonal principal
y la suma de los elementos de mat situados en la diagonal principal. */
#include<iostream>
using namespace std;
int validar()
{float x;
cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tVuelva a introducir el numero\n\tnumero = ";
cin>>x;}
return int(x);}
main()
{
int i,j,n;
//i contador de filas, j contador de columnas, n valor de la dimension
cout<<"\n\n\tINTRODUZCA EL VALOR DE LA DIMENSION DE LA MATRIZ MAT(nxn)\n\tn = ";
n=validar();
//R suma sobre la diagonal, T suma la Diagonal, S suma debajo la diagonal
float Mat[n][n],R=0,S=0,T=0;
//Se carga los elementos de la matriz

for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
     {cout<<"\n\tMat("<<i+1<<","<<j+1<<") = ";
     cin>>Mat[i][j];   
     
     if(i==j) T+=Mat[i][j];//suma los elementos de la diagonal
     if(i<j)  R+=Mat[i][j];//suma los elementos sobre la diagonal
     if(i>j)  S+=Mat[i][j];//suma los elementos debajo de la diagonal
    }   
    
    }
//Se imprime la matriz final con las sumas
cout<<"\n\t\tMATRIZ:\n";
for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    cout<<"\t"<<Mat[i][j];
    cout<<"\n";}
cout<<"\n\tLa suma de los elementos de la diagonal principal es "<<T;
cout<<"\n\tLa suma de los elementos sobre la diagonal principal es "<<R;
cout<<"\n\tLa suma de los elementos debajo la diagonal principal es "<<S<<"\n\n\n";
system("pause");
}
