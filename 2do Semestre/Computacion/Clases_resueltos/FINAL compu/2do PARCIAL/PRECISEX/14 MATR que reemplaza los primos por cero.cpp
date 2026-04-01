/*14) Lea dos numeros enteros m y n, mayores que uno, luego cargue una matriz mxn
cuyas componentes deben ser enteros y positivos. Luego imprima la matriz leida
y a continuacion imprima la misma matriz pero reemplazando por 0 (cero) 
los componentes que son numeros primos*/
#include<iostream>
using namespace std;
int primo(int x);
int entpos();
int intervalo(int x);
main()
{int m,n,i,j;
cout<<"\n\tDIGITE LAS DIMENSIONES PARA LA MATRIZ M(mxn) : ";
cout<<"\n\tm = ";m=intervalo(entpos());
cout<<"\n\tn = ";n=intervalo(entpos());
//SE LEE LA MATRIZ
int M[m][n];cout<<"\n\tINTRODUZCA LAS COMPONENTES DE LA MATRIZ M("<<m<<"x"<<n<<") :\n\n";
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{cout<<"\tM("<<i+1<<"x"<<j+1<<") = ";M[i][j]=entpos();}
cout<<"M("<<m<<"x"<<n<<") :\n\n";
//SE IMPRIME LA MATRIZ INTRODUCIDA Y SE IGUALAN LAS COMPONENTES DE NUMEROS PRIMOS A 0
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
{cout<<"\t"<<M[i][j];
if(primo(M[i][j])) M[i][j]=0;}
cout<<"\n\n";}
//SE IMPRIME LA MATRIZ IGUALDA A 0 LOS COMPONENTES PRIMOS
cout<<"\nLOS ELEMENTOS PRIMOS DE LA MATRIZ M("<<m<<"x"<<n<<") IGUALADOS A 0 (cero):\n\n";
for(i=0;i<m;i++)
{for(j=0;j<n;j++)
cout<<"\t"<<M[i][j];cout<<"\n\n";}
system("pause");}
//FUNCION QUE COMPRUEBA SI UN NUMERO ES PRIMO,
int primo(int x)
{int i;
for(i=2;i<x;i++)
{if(x%i==0) return 0;}//SI NO ES PRIMO DEVUELVE 0
return 1;}//SI ES PRIMO DEVUELVE 1
//FUNCION QUE VALIDA LOS NUMEROS ENTEROS MAYORES QUE 1
int entpos()
{float x;cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A DIGITAR (debe ser entero y positivo)\n\tnumero = ";cin>>x;}
return int(x);}
//FUNCION QUE VALIDA NUMEROS DENTRO DE UN INTERVALO
int intervalo(int x)
{while(x<=1)
{cout<<"\n\tVUELVA A DIGITAR (debe ser mayor que 1)\n\tnumero = ";cin>>x;}
return x;}
