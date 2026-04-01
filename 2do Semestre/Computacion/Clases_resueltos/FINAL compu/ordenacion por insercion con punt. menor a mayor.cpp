/* ordenar una matriz por metodo de insercion con punteros*/
#include<iostream>
using namespace std;
int entpos(void);
int main()
{int i, j, k, m, n;
 float aux;
 float*p;
 cout<<"\n\n introduzca el numero de filas m=";
 m=entpos();
 cout<<"\n\n introduzca el numero de columnas n=";
 n=entpos();
 cout<<"\n\n introduzca las componentes de la matriz mat";
 float mat[m][n];
 for(i=0; i<m; i++)
  {for(j=0;j<n; j++)
     {cout<<"\n mat["<<i+1<<"]["<<j+1<<"]="; cin>>mat[i][j];}}
 cout<<"\n\n la matriz introducida es:";
 for(i=0;i<m;i++)
 {cout<<"\n|"; for(j=0;j<n;j++) cout<<" "<<mat[i][j]<<" ";
  cout<<"|";}
 p=&mat[0][0];
 for(i=1; i<m*n; i++)
 {j=i; aux=*(p+i); 
  while(j>0 && aux<*(p+j-1))
   {*(p+j)=*(p+j-1);j--;}
  *(p+j)=aux;}
      
    
    
    
    
    
    
 cout<<"\n\n la matriz ordenada es:";
 for(i=0;i<m;i++)
 {cout<<"\n|"; for(j=0;j<n;j++) cout<<" "<<mat[i][j]<<" ";
  cout<<"|";}
  cout<<"\n\n";
  system("pause");
  return 0;
}
int entpos (void)
{float x;
    cin>>x;
 while(x<1 || x!=int(x))
  {cout<<"\n el numero debe ser entero y positivo, introduzca nuevamente ";cin>>x;}
  return int(x);} 
