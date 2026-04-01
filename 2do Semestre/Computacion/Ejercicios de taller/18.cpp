#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float a,b,c,d;
	cout<<"Ingrese tres los coeficientes de la ecuacion ax^2+bx+c en orden respectivo \n";
	cin>>a;
	cin>>b;
	cin>>c;
	d=pow(b,2)-(4*a*(c));
	if(d>=0)
	{
	cout<<"\nX1= "<<(-b+sqrt(d))/(2*a);
	cout<<"\nX2= "<<(-b-sqrt(d))/(2*a);
	}
	else
	{
	cout<<"\n"<<-b/(2*a)<<"+("<<sqrt(-d)/(2*a)<<"i)";	
	cout<<"\n"<<-b/(2*a)<<"-("<<sqrt(-d)/(2*a)<<"i)";
	}
	system("pause>null");
	return 0;
}
