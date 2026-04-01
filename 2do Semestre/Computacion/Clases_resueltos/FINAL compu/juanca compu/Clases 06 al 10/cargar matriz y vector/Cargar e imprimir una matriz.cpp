#include<iostream>
using namespace std;
main()
{
 //Cargar una matriz
 int i,j; int m,n;
 cout<<"Ingrese  la  cantidad  de  filas: "; cin>>m;
 cout<<"Ingrese la cantidad  de columnas: "; cin>>n;
 float mat[m][n];// m y n deben ser necesariamente de tipo entero
 //Las filas van de 0 a m-1
 for(i=0;i<=m-1;i++)
 {//Las columnas van de 0 a n-1
  for(j=0;j<=n-1;j++)
  {
   cout<<"mat["<<i+1<<"]["<<j+1<<"]= ";
   cin>>mat[i][j];
  }
 }
 //Imprimir una matriz es imprimir m vectores
 for(i=0;i<=m-1;i++)
 {
  //Imprimir un vector
  cout<<"[\t"<<mat[i][0];//Imprimimos la primera componente antes del for
  for(j=1;j<=n-1;j++)
  {cout<<"\t"<<mat[i][j];}
  cout<<"\t]"<<endl;//al salir del for cerramos el corchete y agregamos un enter
 }
 system("pause");
}
