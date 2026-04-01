/*
  Concepto:
  Dos números amigos son dos enteros positivos "a" y "b" tales que:
  "a" es la suma de los divisores propios de "b", y 
  "b" es la suma de los divisores propios de "a". 
  (la unidad se considera divisor propio, pero no lo es el mismo número).

  Un ejemplo es el par (220, 284), ya que:
  Los divisores propios de 220 son 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110, que suman 284.
  Los divisores propios de 284 son 1, 2, 4, 71 y 142, que suman 220.
*/
#include<iostream>
using namespace std;
char amigo(int,int);
int sumdiv(int);
main()
{
 int i,j; float x;
 do{
    cout<<"Ingrese un numero entre 100 y 10.000"<<endl;
    cin>>x;
    if(x!=int(x)||x<100||x>10000)
     cout<<"Error."<<endl;
   }
 while(x!=int(x)||x<100||x>10000);
 cout<<"Los pares de nros amigos dentro del intervalo ( 100 , "<<x<<" ) son: "<<endl;
 for(i=100;i<x;i++)
 { 
  j=sumdiv(i);
   if(amigo(i,j)=='s' && j<x)
    cout<<i<<" y "<<j<<" son numeros amigos"<<endl;
 }  
 system("pause");
}
char amigo(int a,int b)
{
 int diva,divb;
 diva=sumdiv(a);
 divb=sumdiv(b);
 if(a==divb && b==diva)
  return 's';
 else 
  return 'n';
}
int sumdiv(int x)
{
 int i,sum=0;
 for(i=1;i<=x/2;i++)
  if(x%i==0)
   sum=sum+i;
 return sum;
}
