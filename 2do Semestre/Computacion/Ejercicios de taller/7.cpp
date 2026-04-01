#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"Introduce tres nros ";
	cin>>a;
	cin>>b;
	cin>>c;
	while (a!=int(a) or a<=0)
	{
		cout<<"\nA debe ser entero y positivo ";		
	cin>>a;
	}
		while (b!=int(b) or b<=0)
	{
		cout<<"\nB debe ser entero y positivo ";
		cin>>b;		
	}	while (c!=int(c) or c<=0)
	{
		cout<<"\nC debe ser entero y positivo ";
		cin>>c;		
	}
	while (a>b)
	
	{
	cout<<"\nReescriba B... Debe ser mayor a A ";
	cin>>b;
}
while (b>c)
{
	cout<<"\nReescriba C... Debe ser mayor a B ";
	cin>>c;
}
	if((c-b)==(b-a))
	{
		cout<<"\nLos nros estan en progresion Aritmetica";
	}
	else if(int(c)%int(b)==0 and int(b)%int(a)==0)
	{
			cout<<"\nLos nros estan en progresion Geometrica";
	}
	else
	{
			cout<<"\nLos nros estan no estan progresion Aritmetica ni Geometrica";
	}
	system("pause>null");
	return 0;
}
