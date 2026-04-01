#include<iostream>
using namespace std;
int validacion();
int main()
{int m,n,i,j;
cout<<"\n\t Digite las dimensiones de la matriz. \n\n\t Nro de filas: ";
m=validacion();
cout<<"\n\t Nro de columnas: ";
n=validacion();
cout<<"\n\t Digite las componentes de la matriz: ";
float A[m][n];
for(i=0;i<m;i++)
                {for(j=0;j<n;j++)
                                 {cout<<"\n\n\t A["<<i+1<<"]["<<j+1<<"]= ";
                                 cin>>A[i][j];
                                 }
                }

cout<<"\n\n\t La matriz es: ";
for(i=0;i<m;i++)
                {cout<<"\n\n\t | ";
                for(j=0;j<n;j++)
                                {cout<<A[i][j]<<"  ";}
                cout<<"|";
                }
float c[int(m)],f[int(n)],men,may;
for(i=0;i<m;i++)
                {may=A[i][0];
                for(j=0;j<n;j++)
                                {if(A[i][j]>=
                                may)
                                                {may=A[i][j];
                                                c[i]=may;
                                                }
                                }
                }
for(j=0;j<n;j++)
                {men=A[0][j];
                for(i=0;i<m;i++)
                                {if(A[i][j]<=men)
                                                {men=A[i][j];}
                                }
                f[j]=men;
                }
cout<<"\n\n\t La matriz ampliada es: ";
for(i=0;i<m;i++)
                {cout<<"\n\n\t | ";
                for(j=0;j<n;j++)
                                {cout<<A[i][j]<<"  ";}
                cout<<"| "<<c[i]<<" |";
                }
cout<<"\n\n\t | ";
for(j=0;j<n;j++)
                {cout<<f[j]<<"  ";}
cout<<"|";
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
