//Luis A. Morinigo L. Ejercicio
#include<iostream>
using namespace std;
int esprimo(int);
main()
{
	float x, y;
	int a, b, i;
	do{
		cout<<"Ingrese a: ";cin>>x;
	}while(x<0 || x!=int(x));
	do{
		cout<<"Ingrese b: ";cin>>y;
	}while(y<0 || y!=int(y) || y<x);
	a=int(x);
	b=int(y);
	cout<<"Numeros primos comprendidos entre ("<<a<<","<<b<<"): "<<endl;
	for(i=a+1;i<b;i++)
	{
		if(esprimo(i))
		{
			cout<<i<<endl;
		}
	}
	system("pause");
}
int esprimo(int x)
{
	int i;
	for(i=2;i<=x/2+1;i++)
	{
		if(x%i==0)
		return 0;
		return 1;
	}
}
