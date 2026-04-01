/*Permita la carga e impresión en pantalla de una matriz de números reales de orden mxn, 
y determine e imprima en pantalla la posición de los puntos de silla, siempre y cuando existan. 
Obs: Un punto de silla de una matriz, es un elemento de la misma, tal que, es el menor de su fila 
y el mayor de su columna*/

//“Pregunta sin reparos lo que quieras saber: más que ignorar, es malo no querer aprender”
#include<iostream>
using namespace std;
int entpos();
int mayor(float, float);
main()
{
      int i,j,contfil,contcol, k;
      cout<<"Determine el tamaño de la matriz mxn.\nDigite el nro de filas: ";int m=entpos(); 
      cout<<"Digite el nro de columnas: ";int n=entpos();
      float M[m][n], may=0,men=0,aux, *p, pos[i][j];
      
      for(i=0;i<m;i++)
 {    for(j=0;j<n;j++)
{cout<<"\nDigite la componente M["<<i+1<<"]["<<j+1<<"]: ";cin>>M[i][j];}}

p=&M[0][0];
men=M[0][0];
may=M[0][0];

for(k=1;k<=(m*n);k+=m)
for(j=0;j<m;j++)
for(i=1;i<=n;i++)
if(may<*(p+i))
*(p+i)=may;

for(k=1;k<=(m*n);k+=n)
for(j=1;j<=m;j++)
for(i=0;i<n;i++)
if(men>*(p+i))
*(p+i)=men;

if(men==may)
cout<<"El punto de silla es: "<<"y su posicion es: ";
else
cout<<"No existen puntos de silla";



system("pause");
return 0;
}

int entpos()
{
    float x;
    cin>>x;
    while(x!=int(x)||x<=0)
    {cout<<"El nro debe ser entero y positivo. Favor, digite nuevamente: ";}
    
    return int (x); 
}

