/* Matr08 Elaborar un programa en lenguaje C que,
Permita sumar dos matrices mxn*/
#include<iostream>
using namespace std;
//funcion que valida los numeros enteros y positivos
int natural()
{float x;cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A INTRODUCIR EL NUMERO (debe ser entero y posito)\n\tnumero : ";cin>>x;}
return int(x);}
main ()
//DECLARACION DE VARIABLES; i contador de filas; j contador de columnas, m numero de filas, n numero de columnas
{int i,j,m,n;
cout<<"\n\t\tINTRODUZCA EL ORDEN DE LAS MATRICES A(mxn) Y B (mxn) :\n";
cout<<"\nNUMERO DE FILAS:\nm = ";
m=natural();
cout<<"\nNUMERO DE COLUMNAS:\nn = ";
n=natural();
//SE LEE LAS MATRICES
cout<<"\n\tINTRODUZCA LOS ELEMENTOS DE LAS MATRICES:\n";
float A[m][n],B[m][n];
for(i=0;i<m;i++)
    {for (j=0;j<n;j++)
    {cout<<"\n\tA["<<i+1<<"]["<<j+1<<"] = "; cin>>A[i][j];
    cout<<"\n\tB["<<i+1<<"]["<<j+1<<"] = "; cin>>B[i][j];}}
//Se imprimen las matrices
cout<<"\n\tMATRIZ A:\n";
for(i=0;i<m;i++)
{   cout<<"\t|";
    for (j=0;j<n;j++)
    cout<<"\t"<<A[i][j];
    cout<<"\t|\n";}
cout<<"\n\tMATRIZ B:\n";
for(i=0;i<m;i++)
{   cout<<"\t|";
    for (j=0;j<n;j++)
    cout<<"\t"<<B[i][j];
    cout<<"\t|\n";}
//Se suman las Matrices y se imprime la matriz
cout<<"\n\tLA SUMA ES IGUAL A \n";
for(i=0;i<m;i++)
    {cout<<"\t|";
    for (j=0;j<n;j++)
    {A[i][j]=A[i][j]+B[i][j];
    cout<<"\t"<<A[i][j];}
    cout<<"\t|\n";}
system("pause");
}
