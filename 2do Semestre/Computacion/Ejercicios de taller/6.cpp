#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	float n;
	int i=1;
	double fact=1;
	cout<<"\nIngrese un nro entero, positivo y menor a 100 ";
	cin>>n;
	while (n!=int(n) or n<=0 or n>=100)
	{
		cout<<"\nIngrese un nro entero, positivo y menor a 100 ";
		cin>>n;
	}
	if (int(n)%5==0 and int(n)%2==0)
	{
		cout<<"\nEl nro es par y multiplo de 5 ";
	}
	
	if (int(n)%5==0)
	{
		cout<<"\nEl nro es multiplo de 5 ";
	}
	
	if (int(n)%2==0)
	{
		cout<<"\nEl nro es par ";
	}
	while (i<=n)
	{
	fact=fact*i;
	i++;
}
cout<<"\nEl factorial es "<<fact;
system("pause>null");
return 0;
}
