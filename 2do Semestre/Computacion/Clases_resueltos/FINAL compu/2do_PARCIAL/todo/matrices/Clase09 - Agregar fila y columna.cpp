/*  
  Agregue una fila a una matriz cuyos elementos son los mayores de las columnas
  y una columna cuyos elementos son los menores de las filas. El ultimo elemento
  de la matriz ampliada debe ser la suma del menor elemento de la ultima fila y 
  el mayor elemento de la ultima columna de la matriz ampliada.
*/
#include<iostream>
using namespace std;
int valid(char);
main()
{
 int m,n,i,j,k,sum=0;
 cout<<"Ingrese la cantidad de filas"<<endl;
 m=valid('m');
 cout<<"Ingrese la cantidad de columnas"<<endl;
 n=valid('n');
 float mat[m+1][n+1];
 //Cargamos la matriz
 cout<<"Ingrese las componentes de la matriz"<<endl;
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   {cout<<"mat["<<i+1<<"]["<<j+1<<"]= ";
    cin>>mat[i][j];}
 cout<<"La matriz ingresada es"<<endl;
 for(i=0;i<m;i++)
 {cout<<"|\t";
  for(j=0;j<n;j++)
   {cout<<mat[i][j]<<"\t";}
  cout<<"|"<<endl;}
 //Agregamos la fila cuyos elementos son los mayores de cada columna
 for(j=0;j<n;j++)
 {
  k=0;
  for(i=0;i<m;i++)
  {
   if(mat[i][j]>mat[k][j])
    k=i;
  }
  mat[m][j]=mat[k][j];
 }
 //Agregamos la columna cuyos elementos son los menores de cada fila
 for(i=0;i<m;i++)
 {
  k=0;
  for(j=0;j<n;j++)
  {
   if(mat[i][j]<mat[i][k])
    k=j;
  }
  mat[i][n]=mat[i][k];
 }
 //Buscamos el menor y el mayor de la fila y la columna respectivamente y sumamos
 k=0;
 for(j=0;j<n;j++)
 {
  if(mat[m][j]<mat[m][k])
   k=j;
 }
 sum = sum + mat[m][k];
 k=0;
 for(i=0;i<m;i++)
 {
  if(mat[i][n]>mat[k][n])
   k=i;
 }
 sum = sum + mat[k][n];
 mat[m][n]=sum;
 //Imprimimos la matriz ampliada
 cout<<"La matriz ampliada es"<<endl;
 for(i=0;i<m+1;i++)
 {cout<<"|\t";
  for(j=0;j<n+1;j++)
   {cout<<mat[i][j]<<"\t";}
  cout<<"|"<<endl;}
 system("pause");
}
int valid(char letra)
{
 float x;
 cout<<letra<<"= "; cin>>x;
 while(x!=int(x)||x<=0)
 {cout<<"Error. Debe ser entero y positivo"<<endl;
  cout<<letra<<"= "; cin>>x;}
 return int(x);
}
