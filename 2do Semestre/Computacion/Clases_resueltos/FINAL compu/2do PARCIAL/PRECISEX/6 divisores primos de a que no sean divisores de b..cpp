/*6) Lea dos numeros enteros y positivos a y b, Luego determine e imprima los
divisores primos de a que no sean divisores de b.*/
#include<iostream>
using namespace std;
int primo(int x);//FUNCION QUE VERIFICA SI UN NUMERO ES PRIMO
int entpos();//FUNCION QUE VALIDA LOS NUMEROS NATURALES
main()
{int a,b,i,c=0;
cout<<"\n\n\tDIGITE DOS NUMEROS\n\n\t A = ";a=entpos();
cout<<"\n\t B = ";b=entpos();

//"La clave" aqui ta --->>
cout<<"\n\n\tLOS DIVISORES PRIMOS DE A NO COMUNES CON B son:\n\n";
for(i=1;i<a;i++)
{if((a%i==0)&&(b%i!=0)&&(primo(i))){cout<<"\t"<<i;c++;};}
if(c==0) cout<<"\tA NO POSEE DIVISORES PRIMOS NO COMUNES CON B";// <<---

cout<<"\n\n\t";
system("pause");}

//VALIDA LOS NUMERO ENTEROS Y POSITIVOS
int entpos()
{float x;cin>>x;
while(x!=int(x)||x<=0)
{cout<<"\n\n\tVUELVA A DIGITAR EL NUMERO (debe ser entero y positivo)\n\tn = ";cin>>x;}
return int(x);}

//FUNCION QUE COMPRUEBA SI UN NUMERO ES PRIMO,
int primo(int x)
{int i;
for(i=2;i<x;i++)
{if(x%i==0) return 0;}//SI NO ES PRIMO DEVUELVE 0
return 1;}//SI ES PRIMO DEVUELVE 1
