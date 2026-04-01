//Permita calcular el determinante de una matriz de orden n.
#include<iostream>
using namespace std;
//funcion que valida los numeros naturales
int natural()
{float x;cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A DIGITAR (debe ser entero y positivo)\n\tnumero = ";cin>>x;}
return int(x);}

main()
{int i,j,n;
cout<<"\n\tINTRODUZCA EL ORDEN DE LA MATRIZ A(nxn):\n\tn = ";n=natural();
float A[n][n],M[2*n-1][n],Det,DP,DS,P=0,S=0;
//Se lee la matriz dada
cout<<"\n\tDIGITE LOS ELEMENTOS DE LA MATRIZ:\n";
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
{cout<<"\n\ta"<<i+1<<j+1<<" = ";
cin>>A[i][j];}}
//se imprime la matriz dada
cout<<"\n\tMatriz A:\n";
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
cout<<"\t"<<A[i][j];
cout<<"\t\n";}
//Ampliar Matriz
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
    {M[i][j]=A[i][j];
    M[n+i][j]=M[i][j];}}
//Se Imprime la matriz Ampliada
cout<<"\n\tMatriz Ampliada:\n";
for(i=0;i<(2*n-1);i++)
{for(j=0;j<n;j++)
cout<<"\t"<<M[i][j];
cout<<"\t\n";}
//Se calcula el determinante el determinante
for(i=0;i<n;i++)
    {DP=1;
    for(j=0;j<n;j++)
    {DP=DP*M[i+j][j];}//Multiplica los elementos de las diagonales principales
    P+=DP;}//P suma las multiplicaciones de las diagonales principales

for(i=0;i<n;i++)
    {DS=1;
    for(j=(n-1);j>=0;j=j-1)
    DS=DS*M[j+i][j];//Multiplica los elementos de las diagonales secundarias
    S+=DS;}//S suma las multiplicaciones de las diagonales secundarias

Det=P-S;//P-S es el valor del determinante
cout<<"\n\n\tEL DETERMINANTE DE LA MATRIZ A ES :"<<Det<<"\n\n";
system("pause");}
