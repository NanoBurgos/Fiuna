#include<iostream>
using namespace std;
int validacion();
int primo(int a);
int main()
{
    int m,n,i,j;
cout<<"\n\t Digite las dimensiones de la matriz. \n\n\t Nro de filas: ";
m=validacion();
cout<<"\n\n\t Nro de columnas: ";
n=validacion();
int A[m][n];

for(i=0;i<m;i++)
                {for(j=0;j<n;j++)
                                 {cout<<"\n\n\t A["<<i+1<<"]["<<j+1<<"]= ";
                                 A[i][j]=validacion();
                                 }
                }
cout<<"\n\n\t La matriz leida es: ";

for(i=0;i<m;i++)
                {cout<<"\n\n\t | ";
                for(j=0;j<n;j++)
                                {cout<<A[i][j]<<" ";}
                cout<<"|";
                }
for(i=0;i<m;i++)
                {for(j=0;j<n;j++)
                                 {A[i][j]=primo(A[i][j]);}
                }
cout<<"\n\n\t La matriz modificada es: ";
for(i=0;i<m;i++)
                {cout<<"\n\n\t | ";
                for(j=0;j<n;j++)
                                {cout<<A[i][j]<<" ";}
                cout<<"|";
                }
cout<<"\n\n";
system("pause");
return 0;
}

int validacion()
{
    float x;
    cin>>x;
while(x!=int(x) || x<=0)
{cout<<"\n\t El nro debe ser entero y positivo, digite nuevamente: ";cin>>x;}
return int(x);
}

int primo(int a)
{
    int k=2,x=0,v;
while(k<a && int(a)%k!=0)
          {k++;}
if(k==a)
{x=1;}

if(x==1 || a==1)
{v=0;}

else if(x==0 && a!=1)
{v=a;}

return v;
}
