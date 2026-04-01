#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float n,i,x,g=0,d=0;
	cout<<"\nIngrese un nro ";
	cin>>n;
	while (n<=0 or n!=int(n))	
{
cout<<"\nEl nro debe ser entero y positivo ";
	cin>>n;
}
	for(i=1;i<=n;i++)
	{
		cout<<"\nIngrese otro nro ";
		cin>>x;
			while (x<=0 or x!=int(x))	
			{
				cout<<"\nEl nro debe ser entero y positivo ";
				cin>>x;
			}
			if(2520%int(x)==0 and 840%int(x)==0)
			{
				cout<<"\n"<<x<<"\tEs divisor de 2520 y 840";
			g++;
			d=d+x;	
			}	
	}
	cout<<"/nEl promedio de los nros divisores de 2520 y 840 es "<<d/g;
	system("pause>null");
	return 0;
}
