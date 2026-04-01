/*4) Lea un numero entero positivo n, mayor que 10000 y menor que 100.000,validarlo
y luego imprimir los numeros primos inmediato inferior e inmediato superior a n.*/
#include<iostream>
using namespace std;
int entpos();
int intervalo(int n);
int primo(int x,int c);
main()
{int n,pmayor,pmenor,c=0;
cout<<"\n\n\tINTRODUZCA UN NUMERO ENTERO Y POSITIVO\n\tn = "; n=entpos();n=intervalo(n);
cout<<"\n\tEL NUMERO INTRODUCIDO ES : "<<n;
//SENTENCIAS QUE CALCULAN LOS NUMEROS PRIMOS QUE SE BUSCAN---->>>>"La clave"
pmayor=pmenor=n;
while(c!=2)//mientras c sean distintos de 2, se repetira el ciclo
{pmayor=pmayor+1;//pmayor se le suma 1
c=primo(pmayor,c);}//se carga en c, el valor de la funcion primo(pmayor,c)
do{pmenor=pmenor-1;//pmenor se le resta 1
c=primo(pmenor,c);}//se carga en c2, el valor de la funcion primo(pmenor,c)
while(c!=2);
cout<<"\n\n\tEL NUMERO PRIMO INMEDIATO SUPERIOR ES : "<<pmayor;
cout<<"\n\tEL NUMERO PRIMO INMEDIATO INFERIOR ES : "<<pmenor<<"\n\n\n";
system("pause");}
//funciones de valida los numeros naturales
int entpos()
{float x;cin>>x;    
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A INTRODUCIR EL NUMERO (debe ser entero y positivo)\n\tx = ";
cin>>x;}
return int(x);}
//funcion que valida un intervalo de numeros
int intervalo(int n)
{while(n<=10000||n>=100000)
{cout<<"\n\tDEBE SER n TALQUE 10000<n<100000\n\n\tn = ";n=entpos();}
return n;}
//funcion que comprueba si un numero es primo, si devuelve 2 es primo
int primo(int x, int c)
{int i;c=0;
for(i=1;i<=x;i++)if(x%i==0) c++;
return c;}
