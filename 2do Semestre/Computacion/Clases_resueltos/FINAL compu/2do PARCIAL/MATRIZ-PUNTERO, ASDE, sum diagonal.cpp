#include<iostream>
using namespace std;
int validar(float x);
int m,n;
main()
{ int i,j,a,aux;
cout<<"Ingrese en numero de fila m"<<endl;
m=validar(m);
cout<<"Ingrese en numero de columnas n"<<endl;
n=validar(n);
int mat[m][n];
//Se Carga la matriz en forma ascendente o descendente 
cout<<"Digite las componentes de la matriz MAT("<<m<<"x"<<n<<") "<<endl;
int *p;
p=&mat[0][0];
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{cout<<"MAT["<<i+1<<"]["<<j+1<<"] = "; mat[i][j]=validar(mat[i][j]);
if(i!=0||j!=0)
{while(*(p+n*i+j)<=*(p+n*i+j-1))
{cout<<"Vuelva a digitar\nMAT["<<i+1<<"]["<<j+1<<"] = ";
*(p+i*n+j)=validar(mat[i][j]);}}}}
// impresion
for(i=0;i<m;i++)
{
         for(j=0;j<n;j++)
         {cout<<mat[i][j]<<"\t";
         }
         cout<<"\n";
}
// Halla la suma de la diagonal secundaria 
int *s;
int sum=0;
s=&mat[0][1];
for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
        { if(*(s+i+j)==*(s+n-1))
             {sum=sum+mat[i][j];}
        }
    }
cout<<"La Suma de la Diagonal Secundaria es:"<<sum<<endl;                             
system ("Pause");
}
int validar(float x)
{
    do
      {cout<<"Ingrese un numero entero y positivo"<<endl;
      cin>>x;}
      while(x<0 or int(x)!=x);
      return x;      
}      
