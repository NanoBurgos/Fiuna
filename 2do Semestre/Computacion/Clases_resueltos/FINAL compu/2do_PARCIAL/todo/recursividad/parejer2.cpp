/*Lea un numero entero n>=10 y un munero real, -2<x<2 y luego 
calcule utilizando recursividad
e imprima la suma:
s=sumatoria de k=1 hasta k=m de 1/2^(2*k+1)+1/3^(2*k+1) */
#include<iostream>
#include<math.h>
using namespace std;
float suma(int);
main()
{int n; 
float aux;
//ingresar un numero que verifique las condiciones
cout<<"n=";
cin>>aux;
while(aux!=int(aux)||aux<10)
{cout<<"Error. Ingrese correctamente:";
cin>>aux;}
n=int(aux);

cout<<"La sumatoria es, S= "<<suma(n)<<"\n";

system("pause");}
//funcion recursiva que calcula la sumatoria 
float suma(int k)
{if(k==1)
return 1/pow(2,2*k+1) + 1/pow(3,2*k+1);
else
return 1/pow(2,2*k+1) + 1/pow(3,2*k+1)+suma(k-1);
}
