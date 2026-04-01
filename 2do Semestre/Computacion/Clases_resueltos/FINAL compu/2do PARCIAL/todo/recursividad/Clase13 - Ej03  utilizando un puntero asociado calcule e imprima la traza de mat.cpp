/*Lea dos numeros enteros y positivos m y n (validarlos) que 
representan respectivamente el numero de filas y el numero de columnas
de una matriz mat de componentes reales. Luego lea tantos numeros 
reales como sean necesarios para completar las m x n compnentes de mat 
de tal manera que éstas se encuentren en secuencia estrictamente 
ascendente. Finalmente:
a) imprima las componentes de mat
b) utilizando un puntero asociado calcule e imprima la traza de mat
*/
#include<iostream>
using namespace std;
int valid();
main()
{
 int m,n,i,j;
 cout<<"Ingrese m"<<endl;
 m=valid();
 cout<<"Ingrese n"<<endl;
 n=valid();
 float mat[m][n],*p,t;
 p=&mat[0][0];
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
   if(i==0 && j==0)
   {cout<<"mat["<<i+1<<"]["<<j+1<<"]= ";
    cin>>p[i*n+j];}
   else
   {
    do
    {cout<<"mat["<<i+1<<"]["<<j+1<<"]= ";
     cin>>p[i*n+j];}
    while(p[i*n+j]<=p[i*n+j-1]);
   }   
  }
 for(i=0;i<m;i++)
 {
  cout<<"|\t";
  for(j=0;j<n;j++)
  {cout<<mat[i][j]<<"\t";}
  cout<<"|"<<endl;
 }
 t=0;
 for(i=0;i<m;i++)
 t=t+p[i*n+i];
 
 cout<<"La traza de la matriz es: "<<t<<endl;
 system("pause");
}
int valid()
{
 float x;
 cout<<"Ingrese un nro entero y positivo: ";
 cin>>x;
 while(x!=int(x)||x<=0)
 {
  cout<<"Error!"<<endl;
  cout<<"Ingrese un nro entero y positivo: ";
  cin>>x;
 }
 return int(x);
}
