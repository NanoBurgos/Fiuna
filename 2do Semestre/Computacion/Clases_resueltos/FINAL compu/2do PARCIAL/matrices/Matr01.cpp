/* Matr01: Escribir un programa en lenguaje C que:
Lea un número n y lo acepte sólo si es entero y positivo, en caso contrario,
 solicite nuevamente el número n, hasta obtener uno entero y positivo,
  y los n×n elementos de la matriz cuadrada mat.
Imprima luego el número n, los elementos de la matriz mat y dos números s y t,
obtenidos, respectivamente, como la suma de los elementos de mat cuya suma de
 índices es par y como la suma de los elementos de mat cuya suma de índices es impar. */
#include<iostream>
using namespace std;
int validar();
main()
{
int n,i,j;
//i es para las filas y j es para las columnas; n es la dimension de la matriz
//"S" para los pares "T" para los impares
cout<<"\n\n\tINTRODUZCA EL VALOR DE LA DIMENSION DE LA MATRIZ MAT(nxn)\n\n\t\t\tn = ";
n=validar();
float MAT[n][n],S=0,T=0;
//Se cargan los elementos de la matriz
cout<<"\n\n\tCARGUE LOS ELEMENTOS DE LA MATRIZ";
for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
        {   cout<<"\n\tMAT("<<i+1<<","<<j+1<<")=";
            cin>>MAT[i][j];
            if((i+j)%2==0) S=S+MAT[i][j];//suma los elementos en indices cuya suma es par
            else T=T+MAT[i][j];//suma los elementos en indices cuya suma es impar
        }
    }
//Se imprime la matriz
cout<<"\n\t\tMAT\n";
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
    cout<<"\t"<<MAT[i][j]<<" ";
 cout<<"\n";}
//Se imprimen la suma
cout<<"\n\tLa suma de los elementos, cuyas suma de indices es par, es S = "<<S;
cout<<"\n\tLa suma de los elementos, cuyas suma de indices es impar, es T = "<<T<<"\n\n";
system("pause");
}
int validar()
{float x;cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tVuelva a introducir el numero (Debe ser entero y positivo)\nnumero = ";cin>>x;}
return int(x);}
