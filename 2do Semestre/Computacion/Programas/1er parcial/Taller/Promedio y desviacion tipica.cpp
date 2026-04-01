/*Leer un número entero y positivo “n”(validarlo). Leer n números enteros. 
Determinar e imprimir el promedio y la desviación típica de dichos números.*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
main()
{
float n, i=1, c=0, prom, aux=0, auxi=0,s, a;
cout<<"Introduzca un número entero y positivo= ";cin>>n;
while (n<=0 && n!=int(n))
{cout<<"El numero debe ser entero y positivo, introduzca un nuevo numero= ";cin>>n;}
while(i<=n)
{cout<<"Introduzca el siguiente termino= ";cin>>a;i++;c++;
aux=aux+a; auxi=auxi+(a*a);}
prom=aux/c;
s=sqrt(auxi+prom);
cout<<"El promedio es= "<<prom;
cout<<"La desviacion tipica es= "<<s;
     
system("pause");}
