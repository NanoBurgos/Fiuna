#include<iostream>
#include<stdlib.h>
using namespace std;
int main ()
{
float a,b,c,d;
cout<<"\n\t\tIngrese cuatro numeros";
cout<<"\n\n\ta=";cin>>a;
cout<<"\n\n\tb=";cin>>b;
cout<<"\n\n\tc=";cin>>c;
cout<<"\n\n\td=";cin>>d;
if(int(a)==a&&a>0)
{
	if((int)a%2==0)
{cout<<"\n\t"<<a<<"----> es par";}
    else
{cout<<"\n\t"<<a<<"---->es impar";}
}
else 
{	if (int(a)!=a)
{cout<<"\n\t"<<a<<"----> no es entero";}
    else
{cout<<"\n\t"<<a<<"----> no es positivo";}
}
if(int(b)==b&&b>0)
{
	if((int)b%2==0)
{cout<<"\n\t"<<b<<"----> es par";}
	else
{cout<<"\n\t"<<b<<"----> es impar";}
}
else
	{	if (int(b)!=b)
cout<<"\n\t"<<b<<"----> no es entero";
	else
cout<<"\n\t"<<b<<"----> no es positivo";}
if(int(c)==c&&c>0)
{
	if((int)c%2==0)
	{cout<<"\n\t"<<c<<"----> es par";}
	else
	{cout<<"\n\t"<<c<<"----> es impar";}
}
else
	{
	if (int(c)!=c)
{cout<<"\n\t"<<c<<"----> no es entero";}
	else
cout<<"\n\t"<<c<<"----> no es positivo";
	}
if(int(d)==d&&d>0)
{
	if((int)d%2==0)
	{cout<<"\n\t"<<d<<"----> es par\n\n";}
	else
	{cout<<"\n\t"<<d<<"----> es impar\n\n";}
}
else
	{
	if (int(d)!=d)
	{cout<<"\n\t"<<d<<"----> no es entero\n\n";}
	else
	cout<<"\n\t"<<d<<"----> no es positivo\n\n";
	}
system("pause");
}



