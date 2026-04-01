/*
Calcule e imprima el valor del seno de un ángulo x a partir de la fórmula
tomando un número de términos tal que el último sumando considerado sea el primer
término menor que 10&-5.
*/
#include<iostream>
#include<math.h>
using namespace std;
float fac(int);
float sinx(float x);
int main()
{float x;
  cout<<"introduzca un numero x\n";
  cin>>x;
  cout<<"sinx="<<sinx(x)<<"\n";
  system("pause");
  return 0;
}
float sinx(float x)
{int n=0;
float sum=0;
    while(((pow(x,((2*n)+1)))/fac((2*n)+1))>pow(10,-5))
    {
         sum=sum+((pow(-1,n)*pow(x,((2*n)+1)))/fac((2*n)+1));
         n++;}
   return   sum;} 
float fac ( int n)
{if (n==0)
return 1;
else if( n>0)
return n*fac(n-1);}
