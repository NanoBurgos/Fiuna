#include<iostream>
using namespace std;
int validacion();
int main()
{int n,i,j,k=0,a=0;
cout<<"\n\t Digite el orden de la matriz cuadrada: ";
n=validacion();
cout<<"\n\t Digite las componentes de la matriz: ";
float A[int(n)][int(n)];
for(i=0;i<n;i++)
                {for(j=0;j<n;j++)
                                 {cout<<"\n\n\t A["<<i+1<<"]["<<j+1<<"]= ";
                                 cin>>A[i][j];
                                 }
                }
cout<<"\n\t La matriz leida es: ";
for(i=0;i<n;i++)
                {cout<<"\n\n\t |  ";
                for(j=0;j<n;j++)
                                {cout<<A[i][j]<<"  ";}
                cout<<"|";
                }
for(i=0;i<n;i++)
                {for(j=0;j<n;j++)
                                 {if(A[i][j]==A[j][i])
                                 k++;
                                 else if(A[i][j]==-A[j][i])
                                 a++;
                                 }
                }
if(k==(n*n))
           cout<<"\n\n\t La matriz es simetrica. ";
else if(a==((n*n)-n))
             cout<<"\n\n\t La matriz es antisimetrica. ";
else
             {
             cout<<"\n\n\t La traspuesta de la matriz es: ";
             for(i=0;i<n;i++)
                              {cout<<"\n\n\t |  ";
                              for(j=0;j<n;j++)
                                              {cout<<A[j][i]<<"  ";}
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
while(x<=0 || x!=int(x))
        {cout<<"\n\t El nro debe ser entero y positivo, digite nuevamente: ";
        cin>>x;
        }
return int(x);
}
