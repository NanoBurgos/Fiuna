#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    float n,x,i=1,a=0,b=0,c=0,d=0,e=0,g=0,k=0,f,l=0,prom=0,prome=0,promed=0,t=0,u=0;
    cout<<"Ingrese un nro positivo y mayor a dos ";
    cin>> n;
    x=rand()%999 +1;
    while (n<=2)
    {
          cout<<"Debe ingresar un nro positivo y mayor a dos... Ingrese denuevo ";
          cin>>n;
          }
          while (i<=n)
          {
          i++;
          if (x>300)
          {
                    a++;
                    cout<<"\n"<<x<<"\tEs mayor a 300 ";
                    b=b+x;
                    cout<<b;
                    }
          if(int(x)%5==0)
                   {
                   d++;
                   cout<<"\n"<<x<<"\tEs multiplo de 5 ";
                   e=x+e;
                   }
                   for (f=2; f<x;f++)
                   {
                       if (int(x)%int(f)==0)
                       {
                       g++; 
                       }
                       }
                       if (g==0)
                       {
                               cout<<"\n"<<x<<"\tEs primo ";
                               k=x+k;
                               l++;
                               }
                               x=rand()%999 +1;
                               }
                       cout<<"\nHay "<<a<<" nros mayores a 300 ";
                       prom=b/a;
                       cout<<"\n Su promedio es "<<prom;
                       cout<<"\nHay "<<d<<" nros multiplos de 5 "<<e;
                       prome=e/d;
                       cout<<"\n Su promedio es "<<prome;
                       cout<<"\nHay "<<l<<" nros primos";
                       promed=k/l;
                       cout<<"\n Su promedio es "<<promed;
    system("pause>null");
    return 0;
                       }
                               
                               
