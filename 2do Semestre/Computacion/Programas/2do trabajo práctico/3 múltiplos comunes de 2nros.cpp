#include<iostream>
using namespace std;
int validacion();
int main()
{int a,b,i,j,x=0,aux,r=0;
cout<<"\n\t Digite 2 nros enteros y positivos: ";
a=validacion();
b=validacion();
cout<<"\n\t Los nros leidos son "<<a<<" y "<<b;
if(b<a)
       {aux=b;
       b=a;
       a=aux;
       }
cout<<"\n\t Sus multiplos comunes son: ";
for(i=b;i<=(a*b);i++)
{if(i%a==0 && i%b==0)
{cout<<i<<" ";}
}
cout<<"\n\n";
system("pause");
return 0;
}
int validacion()
{float x;
cin>>x;
while(x!=int(x) || x<=0)
                {cout<<"\n\t El nro no es entero y positivo, digite nuevamente: ";
                cin>>x;
                }
return int(x);
}
