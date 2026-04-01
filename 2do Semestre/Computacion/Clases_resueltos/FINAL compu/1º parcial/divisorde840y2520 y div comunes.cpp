
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main ()
	{ float n,prom=0;
int a,i,k=0;
cout<<"\n\tIngresar un numero entero y positivo\n";
cout<<"\n\tn=";cin>>n;
cout<<"\n\tingresar "<<n<<" numeros enteros";
for(i=1;i<=n;i++)
{do
	{cout<<"\n\ta=";cin>>a;}while(int(a)==a&&a<0);
if(840%a==0&&2520%a==0)
{cout<<a<<" es divisor comun de 840 y 2520";}
if(840%a==0&&2520%a==0){k++;prom+=a;}}
prom/=k;
cout<<"\n\t\nel promedio de los numeros divisores comunes de 840 y 2520 es "<<prom;
cout<<"\n\n\t";
system ("pause");
}
