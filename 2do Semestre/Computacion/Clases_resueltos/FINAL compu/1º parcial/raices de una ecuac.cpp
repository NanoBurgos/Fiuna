#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{int a, b, c, s1, s2, rac,rac1;
cout<<"\n\tintroduzca el valor de a";cout<<"\n\na=";cin>>a;
cout<<"\n\tintroduzca el valor de b";cout<<"\n\nb=";cin>>b;
cout<<"\n\tintroduzca el valor de c";cout<<"\n\nc=";cin>>c;
rac=b*b-(4*a*c);
if(rac>=0)
{	rac1=sqrt(rac);
	s1=(-b+rac1)/(2*a);
	s2=(-b-rac1)/(2*a);
	cout<<"\n\nLas raices de la acuacion son: "<<s1<<" y "<<s2;
}
else
{	rac1=sqrt(-rac);
	s1=(-b+rac1)/(2*a);
	s2=(-b-rac1)/(2*a);
cout<<"\n\nLas raices de la acuacion son: "<<s1<<"i"<<" y "<<s2<<"i";
}
cout<<"\n\n";
system("pause");}
