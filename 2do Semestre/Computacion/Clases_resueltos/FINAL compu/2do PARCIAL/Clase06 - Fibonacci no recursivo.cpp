//Ejemplo de la serie de fibonacci sin usar recursividad
#include<iostream>
using namespace std;
main()
{
 float i,n,a=1,b=0,fib;
 cout<<"Ingrese la cantidad de terminos de la serie de fibonacci"<<endl;
 cout<<"n= "; cin>>n;
 cout<<"fibonacci(0)= "<<0<<endl;
 cout<<"fibonacci(1)= "<<1<<endl;
 for(i=2;i<n;i++)
 {
  fib=a+b;
  b=a;
  a=fib;
  cout<<"fibonacci("<<i<<")= "<<fib<<endl; 
 }
 system("pause");
}
