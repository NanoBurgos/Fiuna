/*Elaborar un programa en lenguaje C que:
Permita imprimir la traspuesta de una matriz dada de orden mxn.*/
#include<iostream>
using namespace std;
int natural();

main()
{int m,n,i,j,AUX;
cout<<"\n\tINTRODUZCA EL ORDEN DE LA MATRIZ M(mxn):\n";
cout<<"\tNUMERO DE FILAS\n\tm = ";
m=natural();
cout<<"\tNUMERO DE COLUMNAS\n\tn = ";
n=natural();
//Se procede a Leer la matriz
float M[m][n];
cout<<"\n\n\tINTRODUZCA LOS ELEMENTOS DE LA MATRIZ M("<<m<<"x"<<n<<"):\n\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
    {cout<<"\tM["<<i+1<<"]["<<j+1<<"] = ";
    cin>>M[i][j];}}
//Se imprime la matriz M
cout<<"\nMATRIZ M:\n\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
    cout<<"\t"<<M[i][j];
    cout<<"\n";;}
//Se imprime la matriz transpuesta de M (M^t)
cout<<"\nMATRIZ TRANSPUESTA DE M:\n\n";
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
    {cout<<"\t"<<M[j][i];}
    cout<<"\n";;}
cout<<"\n\n\t";
system("pause");}
//funcion que permite validar a numeros enteros y positivos
int natural()
{float x;cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A INTRODUCIR EL NUMERO\n\tnumero = ";cin>>x;}
return int(x);}
