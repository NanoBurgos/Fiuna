//Hacer un programa que cargue 2 matrices mat1 y mat2 y que realice la multiplicacion
//de ambas matrices e imprima el resultado

#include<iostream>
using namespace std;
int entpos();
main()
{
int i, j, k, m=entpos(), n=entpos(), p=entpos();
float Mat1[m][n], Mat2[n][p], Prod[m][p];

//carga de las matrices
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{cout<<"digite la componente Mat1[ "<<i+1<< " ][ "<<j+1<<" ]: ";cin>>Mat1[i][j];}

for(i=0;i<n;i++)
for(j=0;j<p;j++)
{cout<<"digite la componente Mat2[ "<<i+1<< " ][ "<<j+1<<" ]: ";cin>>Mat2[i][j];}

//algoritmo de multiplicacion
for(i=0;i<m;i++)
for(j=0;j<p;j++)
{Prod[i][j]=0;
for(k=0;k<n;k++)
Prod[i][j]+=Mat1[i][k]*Mat2[k][j];}

//impresion del resultado
      cout<<"la matriz resultado es: M= \n";
      for(i=0;i<m;i++)
      {cout<<"|";
      for(j=0;j<p;j++)
      {cout<<"       "<<Prod[i][j]<<"       ";}
      cout<<"|"<<"\n";}
system("pause");      
}
int entpos()   
{
    float q;
    do{cout<<"Digite un numero entero y positivo: ";cin>>q;}
    while(q!=int(q) || q<=0);
    return int (q);
}
