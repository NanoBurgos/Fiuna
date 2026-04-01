//Luis A. Morinigo L. Ejercicio 3-Computacion 2016
#include<iostream>
using namespace std;
main()
{
	float x;
	int n;
	int i;
	do{
		cout<<"Ingrese un numero: ";cin>>x;
	}while(x<0 || x!=int(x));
	n=int(x);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			n=n/i;
			i--;
		}
	}
	if(i>41)
	{
		cout<<"Admite divisor primo mayor a 41"<<endl;
	}
	else
	{
		cout<<"No admite divisor primo mayor a 41"<<endl;
	}
	system("pause");
}
