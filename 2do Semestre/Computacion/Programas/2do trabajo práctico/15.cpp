#include<iostream>
using namespace std;
int validacion();
int main()
{int m,n,i,j;
cout<<"\n\t Digite las dimensiones de la matriz. \n\n\t Nro de filas: ";
m=validacion();
cout<<"\n\n\t Nro de columnas: ";
n=validacion();
float A[m][n];
for(i=0;i<m;i++)
                {for(j=0;j<n;j++)
                                 {cout<<"\n\n\t A["<<i+1<<"]["<<j+1<<"]= ";
                                 cin>>A[i][j];
                                 }
                }
cout<<"\n\n\t La matriz leida es: ";
for(i=0;i<m;i++)
                {cout<<"\n\n\t | ";
                for(j=0;j<n;j++)
                                {cout<<A[i][j]<<" ";}
                cout<<"|";
                }
//para convertir la matriz a un vector
float v[int(m*n)],aux;
int a=0;
for(i=0;i<m;i++)
                {for(j=0;j<n;j++)
                                 {v[a]=A[i][j];
                                 a++;
                                 }
                }
a=0;
//para ordenar el vector resultante
for(i=1;i<(m*n);i++)
    {aux=v[i];
        for(j=i-1;j>=0 && aux<v[j];j--)
           {v[j+1]=v[j];
            v[j]=aux;}
    }
//para imprimir
for(i=0;i<m;i++)
                {for(j=0;j<n;j++)
                                 {A[i][j]=v[a];
                                 a++;
                                 }
                }
cout<<"\n\n\t La matriz ordenada en orden ascendente es: ";
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
{float x;
cin>>x;
while(x!=int(x) || x<=0)
                {cout<<"\n\t El nro debe ser entero y positivo, digite nuevamente: ";
                cin>>x;
                }
return int(x);
}
