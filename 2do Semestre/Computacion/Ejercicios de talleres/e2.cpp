#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int n, i, x, y;
	float s=0, f=1;
	cout<<"Ingrese un valor n: ";
	cin>>n;
	cout<<"\n Ingrese un valor x: ";
	cin>>x;
	cout<<"\n";
	for(i=1;i<(n+1);i++){
		f=f*i;
		y=pow(x,i);
		s=s+((y)/f);
	}
	cout<<"\n La respuesta es: \t"<<(s+1)<<"\n";
	system("pause");
}
