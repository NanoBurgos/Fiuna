/*11-Lea dos numeros m y n, que representan, respectivamente el numero de filas y columnas de una
matriz mat. y las componentes de punto flotante de mat. Luego imprime las componentes de mat con
los elementos de la primera fila aumentadas en 1, los de la segunda fila en 2, los de la
tercera en 3, y así sucesivamente utilizando el puntero s que inicialmente apunta 
a la primera componente de mat.*/
#include<iostream>
using namespace std;
int natural ()
{float x; cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\n\tVUELVA A DIGITAR (debe ser entero y positivo)\n\tx = ";cin>>x;}
return int(x);}

main()
{int i,j,m,n;
cout<<"\n\tDIGITE EL ORDEN DE LA MATRIZ A(mxn):\n\n\tNUMERO DE FILAS\n\tm = ";m=natural();
cout<<"\n\tDIGITE EL NUMERO DE COLUMNAS\n\tn = ";n=natural();
float A[m][n],*s;
s=A[0];
//Se carga la matriz A
cout<<"\n\tDIGITE LOS ELEMENTOS DE A:\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{cout<<"\n\tA["<<i+1<<"]["<<j+1<<"] = ";
cin>>A[i][j];}}
//Se imprime la matriz A
cout<<"\n\nMATRIZ A:\n\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<"\t"<<A[i][j];
cout<<"\n\n";}
//Se aumentan los elementos de la matriz A
cout<<"\n\nMATRIZ A AUMENTA EN SUS FILAS:\n\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{*(s+n*i+j)=*(s+n*i+j)+i+1;
cout<<"\t"<<*(s+n*i+j);}
cout<<"\n\n";}

cout<<"\n\n\t\t";
system("pause");}
