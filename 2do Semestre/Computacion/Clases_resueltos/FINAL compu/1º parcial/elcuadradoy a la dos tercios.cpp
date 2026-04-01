#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main ()
{ float n,b,c;
int a,i;
cout<<"\n\tIngresar un numero entero y positivo\n";
cout<<"\n\tn=";cin>>n;
cout<<"\n\tingresar "<<n<<" numeros enteros";
for(i=1;i<=n;i++)
{do
	{cout<<"\n\ta=";cin>>a;}while(int(a)==a&&a<0);
b=a*a;
c=pow(a,0.66666666666666);
cout<<"\n\n\tel cuadrado de"<<a<<" es=\t"<<b;
cout<<"\n\n\t"<<a<<" exponente 2/3 es=\t"<<c;}
cout<<"\n\n\t";
system("pause");
}
