#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float a,b,c,h,d;
	cout<<"Ingrese tres nros \n";
	cin>>a;
	cin>>b;
	cin>>c;
	d=pow((3*b-7*a)/c,2);
	if(c>=0)
	{
		if(pow(a,3)+pow(b,3)>0)
		{
		h=sqrt(pow(a,3)+pow(b,3));
		cout<<"H= "<<h;
		}	
	}
	else if(c<0 and a<=b)
	{
		h=sqrt(d);
		cout<<"H= "<<h;
	}
	else
	{
		cout<<"A="<<a;
		cout<<"B="<<b;
		cout<<"C="<<c;
	}
	system("pause>null");
	return 0;
}
