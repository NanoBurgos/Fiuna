/*2) Lea un numero entero y positivo n, mayor que 10.000 y menor que 100.000,
validarlo y verificar si es capicua, es decir el numero es el mismo leyendo de derecha
a izquierda.(Ejemplo 23532)*/
#include<iostream>
using namespace std;
int entpos();//funcion que valida los numeros enteros y positivos
int intervalo(int n);//funcion que verifica si un numero se encuentra dentro de un intervalo
void capicua(int n);//funcion que verifica si un numero es capicua

main()
{int n;
cout<<"\n\n\tINTRODUZCA UN NUMERO TALQUE 10000<n<100000\n\n\tn = ";
n=entpos();//el valor de la funcion será el valor de n
n=intervalo(n);
cout<<"\n\n\tEL NUMERO INTRODUCIDO ES : "<<n;
capicua(n);
cout<<"\n\n\t";system("pause");}

//DECLARACION DE SENTENCIAS DE FUNCIONES
int entpos()
{float x;cin>>x;    
while(x!=int(x)||x<=0)
{cout<<"\n\tVUELVA A INTRODUCIR EL NUMERO (debe ser entero y positivo)\n\tx = ";cin>>x;}
return int(x);}
int intervalo(int n)
{while(n<=10000||n>=100000)
{cout<<"\n\tDEBE SER n TALQUE 10000<n<1000000\n\n\tn = ";n=entpos();}
return n;}
void capicua(int n)
{int u,d,c,m,dm;
dm=int(n/10000);n=n-dm*10000;
m=int(n/1000);n=n-m*1000;
c=int(n/100);n=n-c*100;
d=int(n/10);n=n-d*10;
u=n;
if(dm==u&&d==m)
cout<<"\n\n\tEL NUMERO ES CAPICUA";
else
cout<<"\n\n\tEL NUMERO NO ES CAPICUA";}
