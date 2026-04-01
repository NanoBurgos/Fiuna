/*Lea dos números enteros y positivos m y n, y una matriz mat, de componentes numéricas,
de orden mxn e imprima la matriz ampliada con:
una fila que contenga la suma de los elementos de las columnas correspondientes,
una columna que contenga la suma de los elementos de las filas correspondientes,
y el elemento (m + 1)x(n + 1) sea igual a la suma de todos los elementos de la matriz.*/
#include<iostream>
using namespace std;
//Funcion que valida los numeros naturales
int natural()
{float x; cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A INTRODUCIR EL NUMERO(debe ser entero y positivo)\n\tnumero=";cin>>x;}
return int(x);}

main ()
{int i,j,m,n;
cout<<"\n\tINTRODUZCA EL ORDEN DE LA MATRIZ M(mxn):\n";
cout<<"\n\tNUMERO DE FILAS\n\tm=";m=natural();
cout<<"\n\tNUMERO DE COLUMNAS\n\tn=";n=natural();
//Se declara la matriz
float M[m][n],AMP[m+1][n+1];
//Se cargan los elementos de la matriz
cout<<"\n\n\tINTRODUZCA LOS ELEMENTOS DE LA MATRIZ M:\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{cout<<"\tM["<<i+1<<"]["<<j+1<<"]=";cin>>M[i][j];
AMP[i][j]=M[i][j];}}
//Se imprime la matriz dada
cout<<"\n\tLA MATRIZ DADA M:\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<"\t"<<M[i][j];cout<<"\n";}
//Se igualan a 0 todos los elementos de la matriz ampliada
for(i=0;i<=n;i++)
AMP[m][i]=0;

for(i=0;i<=m;i++)
AMP[i][n]=0;
//Se realizan las operaciones
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{AMP[i][n]+=M[i][j];
AMP[m][n]+=M[i][j];}}

for(j=0;j<n;j++)
{for(i=0;i<m;i++)
AMP[m][j]+=M[i][j];}

//Se imprime la matriz ampliada
cout<<"\n\tLA MATRIZ AMPLIADA:\n";
for(i=0;i<=m;i++)
{for(j=0;j<=n;j++)
cout<<"\t"<<AMP[i][j];cout<<"\n";}

cout<<"\n\n\t\t";
system("pause");}
