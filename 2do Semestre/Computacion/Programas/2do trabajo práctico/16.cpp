#include<iostream>
using namespace std;
int validacion();
int main()
{int n,i,j,m;
float k;
n=validacion();
cout<<"\n\t Digite las componentes de la matriz: ";
float A[int(n)][int(n)];
for(i=0;i<n;i++)
                {
                        for(j=0;j<n;j++)
                        {cout<<"\n\n\t A["<<i+1<<"]["<<j+1<<"]= "; cin>>A[i][j];}
                }
cout<<"\n\t La matriz leida es: ";
for(i=0;i<n;i++)
                {cout<<"\n\n\t |  ";
                for(j=0;j<n;j++)
                                {cout<<A[i][j]<<"  ";}
                cout<<"|";
                }
for(m=0;m<n;m++)
                {for(i=m+1;i<n;i++)
                                 {if(A[m][m]!=0)
                                                {k=A[i][m]/A[m][m];
                                                for(j=m;j<n;j++)
                                                                {A[i][j]=A[i][j]-(k*A[m][j]);}
                                                }
                                 }
                }
cout<<"\n\n\t La matriz escalonada es: ";
for(i=0;i<n;i++)
                {cout<<"\n\n\t |  ";
                for(j=0;j<n;j++)
                                {cout<<A[i][j]<<"  ";}
                cout<<"|";
                }
cout<<"\n\n";
system("pause");
return 0;
}

int validacion()
{float x;
do{cout<<"\n\t Digite el orden de la matriz cuadrada: ";cin>>x;}
while(x<=0 || x!=int(x));
return int(x);
}
