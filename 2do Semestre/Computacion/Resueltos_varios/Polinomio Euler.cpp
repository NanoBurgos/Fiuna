/*9) Determine el menor numero entero n para el cual el valor numerico del
polinomio n^2+n+41, deja de ser un numero primo. Dicho polinomio, debido a Euler,
es utilizado para obtener los primeros numeros primos*/
#include<iostream>
using namespace std;
int primo(int x);//FUNCION QUE VERIFICA SI UN NUMERO ES PRIMO 
main()
{int n=0,i;
do{n++;i=n*n+n+41;}while(primo(i));
cout<<"\n\n CUANDO n VALGA "<<n<<" EL VALOR DEL POLINOMIO P(n) = n^2+n+41 DEJA DE SER PRIMO\n\n\t";
system("pause");}
//FUNCION QUE COMPRUEBA SI UN NUMERO ES PRIMO,
int primo(int x)
{int i;
for(i=2;i<x;i++)
{if(x%i==0) return 0;}//SI NO ES PRIMO DEVUELVE 0
return 1;}//SI ES PRIMO DEVUELVE 1
