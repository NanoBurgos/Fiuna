#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main()
{
	float a,b,c,d,h;
	int p=1,i=2;
	cout<<"\nIngrese cuatro nros ";
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	while (a<=0 or a!=int(a))	
{
cout<<"\nA debe ser entero y positivo ";
	cin>>a;
}
	while (b<=0 or b!=int(b))	
{
cout<<"\nB debe ser entero y positivo ";
	cin>>b;
}	while (c<=0 or c!=int(c))	
{
cout<<"\nC debe ser entero y positivo ";
	cin>>a;
}	while (d<=0 or d!=int(d))	
{
cout<<"\nD debe ser entero y positivo ";
	cin>>a;
}
while(i<=int(sqrt(a*b*c*d)))
{
	if((int(a)%i==0 and int(b)%i==0) and (int(c)%i==0 and int(d)%i==0))
	{
		p=p*i;
		a=a/float(i);
		b=b/float(i);
		c=c/float(i);
		d=d/float(i);
	}
	else
	{
	i++;
}
}
h=(a*b*c*d)/float(p);
cout<<"\nEl maximo comun divisor es "<<p;
cout<<"\nEl minimo comun multiplo es "<<h;
system("pause>null");
return 0;
}


