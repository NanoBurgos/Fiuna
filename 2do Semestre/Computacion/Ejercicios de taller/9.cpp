#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float n,x,raiz,pot,y;
	int i=0;
	y=1.0/3.0;
	cout<<"\nIngrese un nro ";
	cin>>n;
	while (n<=0 or n!=int(n))	
{
cout<<"\nEl nro debe ser entero y positivo ";
	cin>>n;
}
while (i<n)
{
i++;
cout<<"\nIngrese un nro cualquiera ";
cin>>x;
raiz=pow(x,y);
pot=pow(x,2);
cout<<"\nSu raiz cubica es "<<raiz;
cout<<"\nElevado al cuadrado es "<<pot;
}
system("pause>null");
return 0;
}
