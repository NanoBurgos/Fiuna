/*
Mediante funciones, calcule e imprima el valor de ex a partir de la fórmula 
ex =1+x+(x^2)/2!+(x^3)/3!+ ... tomando un número de términos tal que el último sumando
considerado sea el primer término menor que 10-5.
*/

#include<iostream>
#include<math.h>
using namespace std;
int validacion();
float exp(int );
int fac(int );
float x,n; 
int main()
{cout<<"Ingrese un numero enterto y positivo: \n"<<"x=";
 n=validacion();
  cout<<"e^x ="<<exp(x)<<"\n";
system("PAUSE");
return 0;}
 //validacion
int validacion()
{  cin>>x;
  while(x!=int(x))
  {cout<<"El numero debe ser entero y positivo \n\t Digite nuevamente:";
  cin>>x;
  }
  return int(x);}
//Halla el valor de e^x
float exp(int)
{int n=0;
float sum=0;
    while(((pow(x,n)/fac(n))>pow(10,-5)))
    { sum=sum+ pow(x,n)/fac(n);
         n++;}
   return   sum;}  
   //Factorial
int fac( int )
{if(n==0&&n==1) return 1;
 else if(n>1)
 { return n*fac(n);} 
      }
