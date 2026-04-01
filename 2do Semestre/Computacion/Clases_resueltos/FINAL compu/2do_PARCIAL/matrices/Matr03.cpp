/* Matr03 Lea una matriz cuadrada de orden n, e imprima dicha misma matriz y un
mensaje aclarando si ella es simétrica, antisimétrica o ni simétrica ni
antisimétrica.*/
#include<iostream>
using namespace std;
int validar()
{float x;
cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tVuelva a introducir el numero (Debe ser entero y positivo)\n\t\tnumero = ";
cin>>x;}
return int(x);
}
main()
{
int n,i,j,c1=0,c2=0;
//n valor de la dimension, i contador de filas, j contador de columnas, c contador
cout<<"\n\n\tINTRODUZCA EL ORDEN DE LA MATRIZ(nxn)\n\t\tn = ";
n=validar();
float M[n][n];
//Se cargan los elementos de la Matriz
cout<<"\n\n\tCARGUE LOS ELEMENTOS DE M\n";
for(i=0;i<n;i++)
{   for(j=0;j<n;j++)
    {cout<<"M("<<i+1<<"."<<j+1<<") = ";
    cin>>M[i][j];}}
//Se imprime la matriz
cout<<"\n\n\tMATRIZ:\n";
for(i=0;i<n;i++)
{   for(j=0;j<n;j++)
    cout<<"\t"<<M[i][j]<<" ";
    cout<<"\n";}
//Se comprueba si es simetrica o antisimetrica
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
    {if(M[i][j]==M[j][i])  c1++;
    if (M[i][j]==-M[j][i]) c2++;}
}

if (c1==n*n)
cout<<"\n\n\tLa matriz es simetrica\n\n";
else if (c2==n*n)
cout<<"\n\n\tLa matriz es antisimetrica\n\n";
else
cout<<"\n\n\tLa matriz ni es simetrica ni es antisimetrica\n\n";
system("pause");
}
