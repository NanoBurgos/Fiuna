/* TAA2013Parcial2
   Permita obtener recursivamente valores de la función:
   F(a,b)=0 si a<b
   F(a,b)=F(a-b,b)+1 si a>=b
   a y b pertenecen a los numeros naturales */
#include<iostream>
using namespace std;
int funcion(int,int);
int valid();
main()
{
 int a,b;
 cout<<"Ingrese a= "; a=valid();
 cout<<"Ingrese b= "; b=valid();
 cout<<"F("<<a<<","<<b<<")= "<<funcion(a,b)<<endl;
 system("pause");
}
int funcion(int a, int b)
{
 if(a<b)
  return 0;
 else
  return funcion(a-b,b)+1;
}
int valid()
{
 float x;
 cin>>x;
 while(x!=int(x)||x<=0)
 {cout<<"Error!"<<endl;
  cout<<"Ingrese un nro entero y positivo: ";
  cin>>x;}
 return int(x);
}  
