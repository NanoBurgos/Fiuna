#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float n,x,g,i;
	do
	{
	cout<<"Ingrese un nro positivo y entero";
	cin>>n;
	}
	while(x<=0 or x!=int(x));
	for(i=1;i<=n;i++)
	{
		do
		{
			cout<<"Ingrese un nro entero";
			cin>>x;
		}
		while(x!=int(x));
		if(x>=25 and x<=50 )
		{
			cout<<"El nro "<<x<<" esta entre 25 y 50";
			g=g+x;
		}	
	}
	system("pause>null");
	return 0;
}
