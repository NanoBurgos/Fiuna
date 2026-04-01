#include<iostream>
using namespace std;
int entpos();
main()
{
      int i,j,k;
      cout<<"Determine el tamaño de la matriz mxn.\nDigite el nro de filas: ";int m=entpos(); 
      cout<<"Digite el nro de columnas: ";int n=entpos();
      float M[m][n], may=0,men=0,aux=0, *p;
      
      for(i=0;i<m;i++)
 {    for(j=0;j<n;j++)
{cout<<"\nDigite la componente M["<<i+1<<"]["<<j+1<<"]: ";cin>>M[i][j];}}

for(k=1;k<=m*n;k++)
{for(i=0;i<m;i++)
for(j=0;j<n;j++)
if(M[k][j]<M[i][j])
may=M[i][j];
if(M[i][j]<M[i][k])
men=M[i][j];}

if(men!=may)
cout<<"No existen puntos de silla";
else
cout<<"El punto de silla es: "<<M[i][j]<<"y su posicion es: ";


system("pause");
}

int entpos()
{
    float x;
    cin>>x;
    while(x!=int(x)||x<=0)
    {cout<<"El nro debe ser entero y positivo. Favor, digite nuevamente: ";}
    
    return int (x); 
}
