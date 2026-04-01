#include<iostream>
#include<stdlib.h>
using namespace std;
int main ()
{ float a,max,min,prom=1,n;
int i;
cout<<"\n\tIngresar un numero entero y positivo\n";
cout<<"\n\tn=";cin>>n;
cout<<"\n\tingresar "<<n<<" numeros enteros y positivos";
for(i=1;i<=n;i++)
{	  do
	{cout<<"\na=";cin>>a;}while(int(a)!=a and a<0);
if (i==1)
{min=a;max=a;}
else
	{if(a>max)max=a;
	 if(a<min)min=a;}
prom+=a;
}
prom/=n;
cout<<"\n\nel promedio es "<<prom;cout<<"\n\n\tel mayor es "<<max;cout<<"\tel menor es "<<min;
if((prom-min)>(max-prom))
{cout<<"\n\n\t"<<max<<" es el mas cercano a "<<prom;}
if((prom-min)<(max-prom))
{cout<<"\n\n\t"<<min<<" es el mas cercano a "<<prom;}
	cout<<"\n\t\n\a\a\a";
system("pause");
}

