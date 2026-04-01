/*2-Lea e imprima dos numeros enteros y positivos m y n, mayores que 2 y
 menores o iguales que 20, genere un conjunto de numeros aleatorios hasta
 completar los elementos de la matriz mat de orden mxn.
Imprime mat, ordenando la filas de indice 0 en secuencia ascendente y la de
indice m-1 en secuencia descendente e imprime nuevamente la matriz obtenida*/
#include<iostream>
using namespace std;
int validar()
{float x;
cin>>x;
while(x!=int(x)||x<=2||x>20)
{cout<<"\n\n\tVUELVA A DIGITAR (x€Z,2<x<=20) :\n\tnumero = "; cin>>x;}
return int(x);}
main()
{ int m,n,i,j;
cout<<"\n\tDIGITE EL ORDEN DE LA MATRIZ A(mxn):\n\n\tNUMERO DE FILAS\n\tm = ";
m=validar();
cout<<"\n\tDIGITE EL NUMERO DE COLUMNAS\n\tn = ";
n=validar();
srand(time(NULL));
float A[m][n],aux;
cout<<"\n\tLA MATRIZ GENERADA A:\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{A[i][j]=rand();
cout<<"\t"<<A[i][j];}
cout<<"\n";}
//Se ordena las filas
for (i=0; i<n-1; i++)
    {for(j=0;j<n-1;j++)
        {if (A[0][j]>A[0][j+1])
            {aux=A[0][j];
            A[0][j]=A[0][j+1];
            A[0][j+1]=aux;}
        if(A[m-1][j]<A[m-1][j+1])
            {aux=A[m-1][j];
            A[m-1][j]=A[m-1][j+1];
            A[m-1][j+1]=aux;}
        }}
cout<<"\n\tLA MATRIZ ORDENADA A:\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{cout<<"\t"<<A[i][j];}
cout<<"\n";}
cout<<"\n\n\t\t";
system("pause");}
