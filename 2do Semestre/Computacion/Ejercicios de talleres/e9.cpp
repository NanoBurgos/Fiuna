#include<iostream>
using namespace std;
main()
{
	int i, m, n, b;
	float a, c=1, d=1;
	cout<<"Ingrese un valor m: ";
	cin>>m;
	cout<<"\n Ingrese un valor n: ";
	cin>>n;
	a=m-n;
	for(i=1;i<(m+1);i++){
		c=c*i;
	}
	for(i=1;i<(n+1);i++){
		d=d*i;
	}
	for(i=1;i<(a+1);i++){
		a=a*i;
	}
	cout<<"\n"<<c<<"\t"<<d<<"\t"<<a;
	b=c/(d*a);
	cout<<"\n La respuesta es: \t"<<b<<"\n";
	system("pause");
}
