#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main ()
{ float x,suma=0;
int i,n,sig;
cout<<"\n\tIngresar un numero entero y positivo\n";
cout<<"\n\tn=";cin>>n;
if(n>0 and int(n)==n)
	{
cout<<"\n\tingresar un numeros con coma flotante";cout<<"\nx=";cin>>x;
sig=-1;
for(i=1;i<=n;i++)
{sig*=-i;
suma+=((x*i+1)/(2*i+1))*sig;
}

cout<<"\n\n\tS="<<suma;cout<<"\n\n\t";
	}
else
	cout<<"\n\n\tel numero"<<n<<" no cumple los requisitos solicitados\n\n\t\a\a";
system("pause");
}
	
