/*Programa que permite leer e imprimir dos numeros enteros y positivos m y n, mayores que 2 y
 menores o iguales que 20, cargar una matriz mat de orden mxn con los primeros mxn numeros impares
 consecutivos cuyos residuos de dividir entre 7 es 5 y luego imprime mat.
 obs: mat = 7(2p+1)+5=14p+12*/
#include<iostream>
using namespace std;
int validar()
{float x;
cin>>x;
while(x!=int(x)||x<=2||x>20)
{cout<<"\n\n\tVUELVA A DIGITAR (x==int(x),2<x<=20) :\n\tx = "; cin>>x;}
return int(x);}

main()
{int i,j,m,n,k=1;
cout<<"\n\tDIGITE EL ORDEN DE LA MATRIZ A(mxn):\n\n\tNUMERO DE FILAS\n\tm = ";m=validar();
cout<<"\n\tDIGITE EL NUMERO DE COLUMNAS\n\tn = ";n=validar();
int A[m][n];
//SE CARGA LA MATRIZ
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{A[i][j]=14*k+5;
k++;}}
//SE IMPRIME LA MATRIZ
cout<<"\n\nMATRIZ A:\n\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<"\t"<<A[i][j];
cout<<"\n\n";}
cout<<"\n\n\t";
system("pause");}
