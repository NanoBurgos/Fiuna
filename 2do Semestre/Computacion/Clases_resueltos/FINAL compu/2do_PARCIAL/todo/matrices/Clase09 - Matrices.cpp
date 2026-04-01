#include<iostream>
using namespace std;
int valid();
main()
{
 int m,n;
 cout<<"Ingrese la cantidad de filas, m= ";
 m=valid();
 cout<<"Ingrese la cantidad de columnas, n= ";
 n=valid();
 float mat[m][n];
 int i,j;
 //Cargar la matriz
 cout<<"Ingrese las componentes de la matriz"<<endl;
 for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
    {
     cout<<"mat["<<i+1<<"]["<<j+1<<"]= ";
     cin>>mat[i][j];
    }
  }
 //Imprimir la matriz
 cout<<"La matriz ingresada es"<<endl;
 for(i=0;i<m;i++)
  {
   cout<<"|\t";
   for(j=0;j<n;j++)
    {cout<<mat[i][j]<<"\t";}
   cout<<"|"<<endl;
  }
 cout<<endl;
 system("pause");
}
int valid()
{
 float x;
 cin>>x;
 while(x!=int(x)||x<=0)
  {
   cout<<"Error. Ingrese un nro entero y positivo: ";
   cin>>x;
  }
  return int(x);
}
