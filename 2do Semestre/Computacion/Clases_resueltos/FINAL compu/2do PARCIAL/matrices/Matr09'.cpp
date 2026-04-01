/*Elaborar un programa en lenguaje C que,
Permita multiplicar una matriz de orden mxp por otra de orden pxn.
y ordenar en forma ascendente*/
#include<iostream>
using namespace std;
//Funcion que permite validar los numeros enteros y positivos
int natural()
{float x; cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A INTRODUCIR EL NUMERO (debe ser entero y positivo)\n\tnumero = "; cin>>x;}
return int(x);}
//Declaracion de variables i,j y k contadores; m,n y p valores del orden de las matrices
main()
{int i,j,k,m,n,p;
cout<<"\n\tINTRODUZCA EL ORDEN DE LAS MATRICES A(mxp) Y B(pxn) :\n";cout<<"\n\tm = ";m=natural();
cout<<"\n\tp = ";p=natural();cout<<"\n\tn = ";n=natural();
//Declaracion de Matrices A y B; C será la matriz resultado de la multiplicacion
float A[m][p],B[p][n],C[m][n],AUX;
cout<<"\n\tINTRODUZCA LOS ELEMENTOS DE LAS MATRICES:\n";
for(i=0;i<m;i++)
    {for (j=0;j<p;j++){cout<<"\n\tA["<<i+1<<"]["<<j+1<<"] = "; cin>>A[i][j];}}
for(i=0;i<p;i++)
    {for (j=0;j<n;j++){cout<<"\n\tB["<<i+1<<"]["<<j+1<<"] = "; cin>>B[i][j];}}
//Se multiplican las matrices
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
    {for(k=0;k<p;k++)
      C[i][j]+=A[i][k]*B[k][j];}}

//Se imprimen las matrices con los resultados
cout<<"\n\tMATRIZ A:\n";
for(i=0;i<m;i++)
{   cout<<"\t|";
    for (j=0;j<p;j++)
    cout<<"\t"<<A[i][j];
    cout<<"\t|\n";}
cout<<"\n\tMATRIZ B:\n";
for(i=0;i<p;i++)
{   cout<<"\t|";
    for (j=0;j<n;j++)
    cout<<"\t"<<B[i][j];
    cout<<"\t|\n";}
cout<<"\n\tMATRIZ C=A*B:\n";
for(i=0;i<m;i++)
{   cout<<"\t|";
    for (j=0;j<n;j++)
    cout<<"\t"<<C[i][j];
    cout<<"\t|\n";}
cout<<"\n\t\t\t";
system("pause");
}
