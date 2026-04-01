/*18) Lea dos numeros enteros, m y n, mayores que uno, luego cargue e imprima en
pantalla una matriz de numeros reales de orden mxn y determine e imprima en 
pantalla la posicion de los puntos de silla, siempre y cuando existan.
Obs: Un punto de silla de una matriz, es un elemento de la misma, tal que, es el
menor de su fila y mayor de su columna.*/
#include<iostream>
using namespace std;
int validar();
main()
{int m,n,i,j,c=0;
cout<<"\n\tDIGITE EL ORDEN DE LA MATRIZ M(mxn) :\n";
cout<<"\n\tNUMERO DE FILAS , m = ";m=validar();
cout<<"\n\tNUMERO DE COLUMNAS , n = ";n=validar();
/*SE CARGA LA MATRIZ, M es la matriz a cargarse
F es un vector donde se guardara los menores de todas las filas
C es un vector donde se guardara los mayores de cada columna*/
float M[m][n],F[m],C[n];
cout<<"\n\tDIGITE LAS COMPONENTES DE LA MATRIZ :\n\n";
for(i=0;i<m;i++){for(j=0;j<n;j++){cout<<"\tM["<<i+1<<"]["<<j+1<<"] = ";cin>>M[i][j];}}
//SE IMPRIME LA MATRIZ CARGADA
cout<<"\n\tM("<<m<<"x"<<n<<") :\n\n";
for(i=0;i<m;i++){for(j=0;j<n;j++){cout<<"\t"<<M[i][j];} cout<<"\n";}
//SE HALLA EL PUNTO SILLA
for(i=0;i<m;i++)
{F[i]=M[i][0];//SE CARGAN LOS MENORES DE CADA FILA EN EL VECTOR F
for(j=0;j<n;j++)
{if(F[i]>M[i][j]) F[i]=M[i][j];}}
for(j=0;j<n;j++)
{C[j]=M[0][j];//SE CARGAN LOS MAYORES DE CADA COLUMNA EN EL VECTOR C
for(i=0;i<m;i++)
{if(C[j]<M[i][j]) C[j]=M[i][j];}}
//SE IMPRIMEN LOS PUNTOS SILLA
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
if(F[i]==C[j]) 
{c++; cout<<"\n\tEL PUNTO SILLA ES "<<F[i]<<" EN LA POSICION M["<<i+1<<"]["<<j+1<<"]\n\n";}}
if(c==0) cout<<"\n\tNO EXISTE PUNTO SILLA\n\n";
system("pause");}
//FUNCION QUE VALIDA LOS NUMEROS ENTEROS MAYORES QUE 1
int validar()
{float x;cin>>x;
while(x!=int(x)||x<=1)
{cout<<"\n\tVUELVA A DIGITAR\n\tx = ";cin>>x;}
return int(x);}
