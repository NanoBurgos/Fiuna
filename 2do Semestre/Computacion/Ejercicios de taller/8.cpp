#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float n,x,i,s=1;
	cout<<"Ingrese un nro ";
	cin>>n;
	while (n<=0 or n!=int(n))
	{
		cout<<"Ingrese un nro entero y positivo ";
		cin>>n;
	}
		cout<<"Ingrese otro nro cualquiera ";
		cin>>x;
		for(i=1;i<=n;i++)
		{
			s=s+(((x*i)+1)/((2*i)+1))*pow(-1,i);
		}
		cout<<"La sumatoria vale "<<s;
	system("pause>null");
	return 0;
}
