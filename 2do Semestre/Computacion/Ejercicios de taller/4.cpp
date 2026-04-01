#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	float num, x=2;
	cout<<"Ingrese un nro ";
	cin>>num;
	while(num<=0 or num!=int(num))
	{
		cout<<"Debe ingresar un nro entero y positivo";
		cin>>num;
	}
	while (num!=1)
	{
	if(int(num)%int(x)==0)
	{
		cout<<x<<"\n";
		num=num/x;
	}
	else 
	{ 
	x=x+1;
	}
}
	system("pause>null");
	return 0;
}

