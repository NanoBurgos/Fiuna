#include<iostream>
using namespace std;
main()
{
	int n, i;
	float s=0, f=1;
	cout<<"Ingrese un valor: ";
	cin>>n;
	for(i=1;i<(n+1);i++){
		f=f*i;
		s=s+(1/f);
	}
	cout<<"\n La respuesta es: \t"<<(s+2)<<"\n";
}
