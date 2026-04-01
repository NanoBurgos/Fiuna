/*TAA2011Parcial2
  Lea dos números enteros y positivos (validarlos) m y n,  que representan, 
  respectivamente, el número de filas y el número de columnas de una matriz  mat  
  de componentes reales positivas. Luego lea e imprima las  mxn  componentes de  
  mat. Luego determine e imprima la mayor de las componentes de mat  y la matriz 
  obtenida después de dividir cada componente de  mat  por dicho mayor elemento. */
#include<iostream>
using namespace std;
int valid();
main()
{
 int m,n,i,j,k;
 cout<<"Ingrese m= "; m=valid();
 cout<<"Ingrese n= "; n=valid();
 float mat[m][n],*p=&mat[0][0],mayor;
 cout<<endl;
 //Cargamos la matriz positiva
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
   cout<<"mat["<<i+1<<"]["<<j+1<<"]= ";
   cin>>mat[i][j];
   while(mat[i][j]<=0)
   {cout<<"mat["<<i+1<<"]["<<j+1<<"]= ";
    cin>>mat[i][j];}
  }
 cout<<endl;
 //Imprimimos la matriz cargada
 for(i=0;i<m;i++)
 {
  cout<<"|\t";
  for(j=0;j<n;j++)
  {cout<<mat[i][j]<<"\t";}
  cout<<"|"<<endl;
 }
 //Buscamos la posicion del mayor mediante el puntero p
 k=0;//variable que indica la posicion del mayor elemento
 for(i=1;i<m*n;i++)
  if(p[k]<p[i])
   k=i;
 mayor=p[k];
 //Dividimos la matriz cargada entre el mayor elemento
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
   mat[i][j]=mat[i][j]/mayor;
  }
 cout<<endl;
 //Imprimimos la matriz final
 for(i=0;i<m;i++)
 {
  cout<<"|\t";
  for(j=0;j<n;j++)
  {cout<<mat[i][j]<<"\t";}
  cout<<"|"<<endl;
 }
 system("pause");
}
int valid()
{
 float x;
 cin>>x;
 while(x!=int(x)||x<=0)
 {cout<<"Error!"<<endl;
  cout<<"Ingrese un nro entero y positivo: ";
  cin>>x;}
 return int(x);
}
