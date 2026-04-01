#include<iostream>
using namespace std;
int validacion();
int main()
{int m,n,i,j,k;
cout<<"\n\t Digite las dimensiones de las matrices. \n\n\t Nro de filas: ";
m=validacion();
cout<<"\n\t Nro de columnas: ";
n=validacion();
cout<<"\n\t Digite las componentes de la primera matriz: ";
float A[m][n],B[m][n];
for(i=0;i<m;i++)
                {for(j=0;j<n;j++)
                                 {cout<<"\n\n\t A["<<i+1<<"]["<<j+1<<"]= ";
                                 cin>>A[i][j];
                                 }
                }
cout<<"\n\t Digite las componentes de la segunda matriz: ";
for(i=0;i<m;i++)
                {for(j=0;j<n;j++)
                                 {cout<<"\n\n\t B["<<i+1<<"]["<<j+1<<"]= ";
                                 cin>>B[i][j];
                                 }
                }
cout<<"\n\n\t Matriz A: ";
for(i=0;i<m;i++)
                {cout<<"\n\n\t | ";
                for(j=0;j<n;j++)
                                {cout<<A[i][j]<<"  ";}
                cout<<"|";
                }
cout<<"\n\n\t Matriz B: ";
for(i=0;i<m;i++)
                {cout<<"\n\n\t | ";
                for(j=0;j<n;j++)
                                {cout<<B[i][j]<<"  ";}
                cout<<"|";
                }
cout<<"\n\n\t La suma de las matrices es: ";
float sum[m][n],dif[m][n];
for(i=0;i<m;i++)
                {for(j=0;j<n;j++)
                                 {sum[i][j]=A[i][j]+B[i][j];
                                 dif[i][j]=A[i][j]-B[i][j];
                                 }
                }
for(i=0;i<m;i++)
                {cout<<"\n\n\t | ";
                for(j=0;j<n;j++)
                                {cout<<sum[i][j]<<"  ";}
                cout<<"|";
                }
cout<<"\n\n\t La diferencia de las matrices es: ";
for(i=0;i<m;i++)
                {cout<<"\n\n\t | ";
                for(j=0;j<n;j++)
                                {cout<<dif[i][j]<<"  ";}
                cout<<"|";
                }
if(m!=n)
        {cout<<"\n\n\t El producto es incompatible.";}
else
        {float p[m][n];
        for(i=0;i<m;i++)
                        {for(j=0;j<n;j++)
                                         {p[i][j]=0;
                                         for(k=0;k<n;k++)
                                                         {p[i][j]+=(A[i][k]*B[k][j]);}
                                         }
                        }
        cout<<"\n\n\t El producto de las matrices es: ";
        for(i=0;i<m;i++)
                {cout<<"\n\n\t | ";
                for(j=0;j<n;j++)
                                {cout<<p[i][j]<<"  ";}
                cout<<"|";
                }
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
