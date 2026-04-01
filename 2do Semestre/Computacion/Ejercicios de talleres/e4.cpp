#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int m, i=2, e, z, a, x=0, y=1, b, c, d;
cout<<"Ingrese un numero entero ";
	cin>>a;
	while(y<2) {
		x=pow(10,i);
		z=int(a/x);
		if(z==0){
			e=i;
			y++;
		}
		i++;
	}
	 
	cout<<"el numero tiene: "<<e<<" digitos \n";
	m=e;
	d=a;
	while(m>0){
		c=pow(10,(m-1));
		b=int(d/c);
		d=d%c;
		cout<<b<<"\t";
		m=m-1;
	}
	cout<<"\n";
	system("pause");
	}
