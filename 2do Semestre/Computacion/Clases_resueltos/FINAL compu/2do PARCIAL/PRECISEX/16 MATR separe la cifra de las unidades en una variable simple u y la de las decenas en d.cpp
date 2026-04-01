/*16) Genere, al azar, un conjunto de 50 numeros enteros no negativos menores que 100,
separe la cifra de las unidades en una variable simple u y la de las decenas en d y 
cuente los numeros generados en la posicion (u,d) de una matriz mat. Luego imprima mat.*/
#include<iostream>
using namespace std;
main()
{int M[10][10],u,d,i,j,x,c=0;
srand(time(NULL));
//IGUALO A 0 (CERO) TODOS LOS ELEMENTOS DE LA MATRIZ
for(i=0;i<10;i++)
{for(j=0;j<10;j++)
M[i][j]=0;}
//CARGO LOS NUMEROS ALEATORIOS EN SUS POSICIONES (u,d)
for(i=0;i<50;i++)
{x=rand()%100; d=x/10;u=x-d*10; M[u][d]=x;}
//SE IMPRIME LA MATRIZ GENERADA
cout<<"\n\n\tLA MATRIZ GENERADA ES :\n\n";
for(i=0;i<10;i++) 
{for(j=0;j<10;j++)
{cout<<M[i][j]<<"\t";if (M[i][j]) c++;}
cout<<"\n";}
cout<<"\tLA CANTIDAD DE NUMEROS GENERADOS ES : "<<c<<"\n\n";
system("pause");}
