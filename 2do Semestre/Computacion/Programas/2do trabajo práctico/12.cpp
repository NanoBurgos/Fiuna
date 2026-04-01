/* Diseñar un programa tal que lea 2 nros enteros y positivos m y n y a continuacion lea los mxn elementos de una matriz entera,
el programa debe dar como salida la posicion de un punto silla de la matriz o el mensaje "la matriz no tiene punto silla" segun el
caso (un punto silla de una matriz es el elemento que tiene la propiedad de ser el menor de su fila y el mayor de su columna)*/
#include<iostream>
using namespace std;
int validacion1();
int validacion2();
int main()
{int i,j,m,n;
cout<<"\n\t Digite las dimensiones de la matriz: \n\n\t Nro de filas: ";
m=validacion1();
cout<<"\n\t Nro de columnas: ";
n=validacion1();
int mat[m][n];
cout<<"\n\t Digite los componentes de la matriz: ";
for(i=0;i<m;i++)
                {for(j=0;j<n;j++)
                                 {cout<<"\n\t mat["<<i+1<<"]["<<j+1<<"]= ";
                                 mat[i][j]=validacion2();
                                 }
                }
cout<<"\n\t La matriz leida es: \n";
for(i=0;i<m;i++)
                {cout<<"\n\t | \t";
                for(j=0;j<n;j++)
                                {cout<<mat[i][j]<<"\t";
                                }
                cout<<"|";
                }
int jmen,imay,k,nmen,nmay;
k=0;
for(i=0;i<m;i++)
                {jmen=0;
                for(j=1;j<n;j++)
                                {if(mat[i][jmen]>mat[i][j])
                                jmen=j;
                                }
                nmen=0;
                for(j=0;j<n;j++)
                                if(mat[i][jmen]==mat[i][j])
                                nmen++;
                if(nmen<=1)
                {
                imay=0;
                for(j=1;j<m;j++)
                                {if(mat[imay][jmen]<mat[j][jmen])
                                imay=j;
                                }
                }
                nmay=0;
                for(j=0;j<m;j++)
                                if(mat[imay][jmen]==mat[j][jmen])
                                nmay++;
                if(nmay==1)
                {
                if(imay==i)
                                {k++;
                                cout<<"\n\n\t"<<k<<"-Punto silla: mat["<<imay+1<<"]["<<jmen+1<<"]= "<<mat[imay][jmen];
                                }
                }
                }
if(k==0)
        cout<<"\n\t La matriz no tiene puntos silla.";
cout<<"\n\n";
system("pause");
return 0; 
}
int validacion1()
{float x;
cin>>x;
while(x<=0 || x!=int(x))
{cout<<"\n\t El nro debe ser entero y positivo, digitelo nuevamente: ";
cin>>x;}
return int(x);
}
int validacion2()
{float x;
cin>>x;
while(x!=int(x))
{cout<<"\n\t El nro debe ser entero, digitelo nuevamente: ";
cin>>x;}
return int(x);
}
