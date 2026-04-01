/*11) Determine el primer par de numeros primos consecutivos cuya diferncia es 50.*/
#include<iostream>
using namespace std;
int primo(int x);
main()
{int i=0;
do{i++;}while(primo(i)==0||primo(i+50)==0);
cout<<"\nEL PRIMER PAR DE NUMEROS PRIMOS CONSECUTIVOS CUYA DIFERENCIA ES 50\n\tSON : "<<i<<" y "<<i+50<<"\n\n\t"; 
system("pause");}
//FUNCION QUE COMPRUEBA SI UN NUMERO ES PRIMO,
int primo(int x)
{int i;
for(i=2;i<x;i++)
{if(x%i==0) return 0;}//SI NO ES PRIMO DEVUELVE 0
return 1;}//SI ES PRIMO DEVUELVE 1
