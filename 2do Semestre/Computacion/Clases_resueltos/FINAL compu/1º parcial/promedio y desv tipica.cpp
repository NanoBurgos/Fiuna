#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main ()
{ float n,prom=0,scuad=0;
int a,i;
cout<<"\n\tIngresar un numero entero y positivo\n";
cout<<"\n\tn=";cin>>n;
cout<<"\n\tingresar "<<n<<" numeros enteros";
for(i=1;i<=n;i++)
{do
	{cout<<"\n\ta=";cin>>a;}while(int(a)!=a);
prom=prom+a;
scuad+=a*a;}
prom=prom/n;
scuad=sqrt(scuad+prom*prom);
cout<<"\n\n\tel promedio es=\t"<<prom;
cout<<"\n\n\tla desviacion tipica es=\t"<<scuad;
cout<<"\n\n\t";
system("pause");
}
