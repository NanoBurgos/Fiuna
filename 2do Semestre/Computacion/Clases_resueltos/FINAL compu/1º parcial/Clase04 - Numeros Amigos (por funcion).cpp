/*Ingrese un numero entero "n" entre 100 y 32000. Determine e imprima
 los pares de numeros amigos menores a "n". Si no existen numeros
 amigos menores que el numero ingresado, el programa debe reiniciar
 automáticamente, en caso contrario termnia el bucle.

Concepto:
Dos números amigos son dos enteros positivos "a" y "b" tales que:
"a" es la suma de los divisores propios de "b", y 
"b" es la suma de los divisores propios de "a". 
(la unidad se considera divisor propio, pero no lo es el mismo número).

Un ejemplo es el par (220, 284), ya que:
Los divisores propios de 220 son 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110, que suman 284.
Los divisores propios de 284 son 1, 2, 4, 71 y 142, que suman 220.*/

#include<iostream>
using namespace std;
//Declaramos las funciones
int sumdiv(int);
int valid();
//Función Principal
main ()
{
 int aux,b,a,n;
 do
 {
  aux=0;
  n=valid();
  for(a=1;a<n;a++)
  {
   b=sumdiv(a);
   if (a==sumdiv(b) && a!=b)
   {
    cout<<"\n"<<a<<" y "<<b<<" Son amigos";
    aux=1;
   }
  }
  if(aux==0)
  cout<<"\nError. No hay pares de numeros amigos menores que "<<n;
  cout<<"\n\n";
 }
 while(aux==0);
 system("pause"); //para poder ver los resultados antes que el programa cierre.
}

//Desarrollamos las funciones

int sumdiv(int x)
{ 
 int i,sum=0;
  for(i=1;i<=(x/2);i++)
  {
   if(x%i==0)
   sum=sum+i;
  }
  return sum;
}

int valid()
{
 float x;
 do{cout<<"Introduzca un numero entero y positivo "
        <<"entre 100 y 32000\n\tn=";
    cin>>x;}
 while(x!=int(x)||x<1||x<100||x>32000);
 return int(x);
}
