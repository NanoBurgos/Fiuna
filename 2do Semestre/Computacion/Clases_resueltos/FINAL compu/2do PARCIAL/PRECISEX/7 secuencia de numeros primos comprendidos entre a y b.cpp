/*7) Lea dos numeros enteros y positivos a y b. Luego determine e imprima la
secuencia de numeros primos comprendidos entre a y b*/
#include<iostream>
using namespace std;
int primo(int x);//VERIFICA SI UN NUMERO ES PRIMO
int entpos();//VALIDA LOS NUMEROS ENTEROS Y POSITIVOS

main()
{int a,b,i,c=0,aux;
cout<<"\n\n\tDIGITE DOS NUMEROS\n\n\t A = ";a=entpos();
cout<<"\n\t B = ";b=entpos();
if(a>b) {aux=b;b=a;a=aux;}
//"La clave"-->>
cout<<"\n\n\tLOS NUMEROS PRIMOS EN EL INTERVALO ("<<a<<","<<b<<") SON :\n\n";
for(i=a+1;i<b;i++)
if(primo(i)) {c++;cout<<"\t"<<i;}
if(c==0) cout<<"\tNO HAY NUMEROS PRIMOS";//<<--

cout<<"\n\n\t";
system("pause");}

//FUNCION QUE VALIDA LOS NUMEROS ENTEROS Y POSITIVOS
int entpos()
{float x;cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\n\tVUELVA A DIGITAR EL NUMERO (debe ser entero y positivo)\n\tn = ";cin>>x;}
return int(x);}
//FUNCION QUE DEVUELVE 1 SI ES PRIMO Y 0 SI NO LO ES
int primo(int x)
{int i;
for(i=2;i<x;i++)
{if(x%i==0) return 0;}
return 1;}
