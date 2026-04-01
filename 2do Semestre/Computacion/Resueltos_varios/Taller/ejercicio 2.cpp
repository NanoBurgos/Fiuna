/*Leer un número “n” entero y positivo mayor o igual a 2. Generar “n” números aleatorios
entre 0 y 1000 (intervalo abierto). Calcular e imprimir la cantidad y el promedio de los que sean 
mayores a 300, primos y múltiplos de 5. (Sugerencia: usar la función rand() con semilla)*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{int num, i=1, k, c=0, aux=0, N;
float n, prom, d;
srand(time(NULL));
cout<<"Introduzca un numero entero y positivo mayor o igual a 2: "; cin>>n;
while(n<2 || n!=int(n))
          {cout<<"\aIntroduzca un numero entero y positivo mayor o igual a 2: "; cin>>n;}
N=int(n);
while(i<=N)
           {num=0+rand()%(1001-0);
           cout<<"\n\nNumero aleatorio: "<<num<<"\n\n";
           for(k=2; k<num; k++)
           {d=num%k;
           if(d!=0 && num>300 && num%5==0)
           {aux=aux+num; c++;}}
           i++;}
prom=float(aux)/float(c);
cout<<"Cantidad de numeros aleatorios que sean mayores a 300, primos y multiplos de 5: "<<c<<"\n";
cout<<"Promedio de numeros aleatorios que sean mayores a 300, primos y multiplos de 5: "<<prom<<"\n\n";
system("pause");}
