/*15) Lea e imprima un numero entero n, mayor que 2 y menor o igual que 20,
y un conjunto de n pares (x,y) de numeros de punto flotante, que representan
resultados de mediciones en laboratorio, luego, clasifique estos pares, en secuencia
ascendente por su primera coordenada e imprima el resultado*/
#include<iostream>
using namespace std;
int validar();
main()
{int n,i,j;
cout<<"\n\n\tDIGITE UN NUMERO ENTERO MAYOR QUE 2 Y MENOR O IGUAL QUE 20\n\tn = ";n=validar();
cout<<"\n\tINTRODUZCA LOS CONJUNTOS (x,y) DE LAS MEDICIONES EN LABORATORIO :\n";
float V[2][n],AUX;
for(i=0;i<n;i++)
{cout<<"\tx"<<i+1<<" = ";cin>>V[0][i];cout<<"\ty"<<i+1<<" = ";cin>>V[1][i];cout<<"\n";}
//SE ORDENA LA MATRIZ
for(j=0;j<n;j++)
{for(i=0;i<n-1;i++)
{if(V[0][i]>V[0][i+1])
{AUX=V[0][i];V[0][i]=V[0][i+1];V[0][i+1]=AUX;
AUX=V[1][i];V[1][i]=V[1][i+1];V[1][i+1]=AUX;}}}
//SE IMPRIME LA MATRIZ
cout<<"\n\tLAS MEDICIONES ORDENADAS SON : ";
for(i=0;i<n;i++)
{cout<<" ("<<V[0][i]<<","<<V[1][i]<<")";}
cout<<"\n\n\t";
system("pause");}
//funcion que valida los numeros enteros mayores que 2 y menores o iguales que 20
int validar()
{float x;cin>>x;
while(x!=int(x)||x<=2||x>20)
{cout<<"\n\tVUELVA A DIGITAR EL NUMERO\n\tn = ";cin>>x;}
return int(x);}
