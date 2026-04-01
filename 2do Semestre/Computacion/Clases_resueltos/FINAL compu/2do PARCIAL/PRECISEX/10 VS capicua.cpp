/*10) Lea un numero entero y positivo n, mayor que 10.000 y menor que 100.000,
validarlo y luego imprima los numeros inmediato inferior e inmediato superior a n
que son capicua, es decir el numero es el mismo leyendolo de derecha a izquierda*/
#include<iostream>
using namespace std;
int capicua(int x);
int entpos()//funcion que valida los numeros enteros y positivos n mayor que 10000 y menor que 100000
{float x;cin>>x;
while(x!=int(x)||x<10000||x>100000)
{cout<<"\n\tVUELVA A DIGITAR\n\tnumero = ";cin>>x;}
return int(x);}
main()
{int n,mayor,menor;
cout<<"\n\n\tINTRODUZCA UN NUMERO ENTERO MAYOR QUE 10000 Y MENOR QUE 100000\n\tnumero = ";n=entpos();
mayor=menor=n;//inicialmente mayor es igual a menor e igual a n
do{mayor=mayor+1;}while(capicua(mayor)==0);//mientras no sea capicua mayor se le sumara 1
do{menor=menor-1;}while(capicua(menor)==0);//mientra no sea capicua menor se le restara 1
cout<<"\n\tEL INMEDIATO SUPERIOR A "<<n<<" QUE ES CAPICUA ES : "<<mayor;
cout<<"\n\tEL INMEDIATO INFERIOR A "<<n<<" QUE ES CAPICUA ES : "<<menor<<"\n\n\n\t";
system("pause");}
int capicua(int x)//funcion que verifica si un numero es capicua
{int x1,a=1,b=1,c=1,y=0,i;x1=x;
while((b*10)<x1)
{c++;b=b*10;}
for(i=0;i<c;i++)
{y=y+a*(int(x1/b));x1=x1-b*int(x1/b);a=a*10;b=b/10;}
if(y==x) return 1;//si es capicua devuelve 1
else return 0;}//si no es capicua devuelve 0
