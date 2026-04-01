/*Leer un número entero y positivo “n” (validarlo) y luego leer “n” números, 
e identificar con un mensaje en pantalla aquellos números que son divisores de 
2520 y de 840 simultáneamente, imprimir al final del programa el promedio los de números leídos 
que cumplen dicha condición.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{float n, i=1, a, aux=0, c=0, prom;
cout<<"Introduzca la cantidad de numeros: "; cin>>n;
while(n<0 || n!=int(n))
          {cout<<"LA CANTIDAD DEBE SER ENTERA Y POSITIVA, DIGITE NUEVAMENTE: "; cin>>n;}
while(i<=n)
           {cout<<"Introduzca el "<<i<<" numero: "; cin>>a; i++;
           cout<<"\n";
           if(2520%int(a)==0 && 840%int(a)==0)
           {cout<<a<<" es divisor de 2520 y 840 simultaneamente\n\n";
           aux=aux+a;
           c++;}}
prom=aux/c;
cout<<"El promedio de los numeros divisores de 2520 y 840 simultaneamente es: "<<prom<<"\n\n";      
system("pause");}
