#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float n,x,d=0,f=0,s,g;
	int i;
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
			while (x<=0 )	
			{
				cout<<"\nEl nro debe ser entero ";
				cin>>x;
			}
			d=d+x;
			f=f+pow(x,2);
		}
		g=d/n;
		s=sqrt(f+g);
		cout<<"El promedio es "<<g<<" Y la desviacion tipica es "<<s;
		system("pause>null");
		return 0;
}
