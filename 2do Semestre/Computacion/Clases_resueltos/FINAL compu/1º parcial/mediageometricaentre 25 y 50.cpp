#include<iostream>
#include<stdlib.h> 
#include<math.h>
using namespace std;
int main ()
{ float a,n,g;
  int x,s=1;
  cout<<"\n\tIngresar un numero entero y positivo\n";
  cout<<"\n\tn=";cin>>n;
  cout<<"\n\tingresar "<<n<<" numeros enteros";
  for(x=1;x<=n;x++)
  {	  do
	{cout<<"\na=";cin>>a;}while(int(a)!=a);
  if(a<=50&&a>=25){s*=a;g=pow(s,1/n);}
  if(a<=50&&a>=25)  {cout<<"\n"<<a<<"\testa entre 25 y 50";}
  }
  cout<<"\n\tla media geometrica de los numeros entre 25 y 50 es=\t"<<g;
  cout<<"\n\t\n\a\a\a";
  system("pause");

}
