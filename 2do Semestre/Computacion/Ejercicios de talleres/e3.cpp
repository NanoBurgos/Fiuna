#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int m, i=2, e, z, a, x=0, y=1, b, c, d, f;
cout<<"Ingrese un numero con un numero par de cifras ";
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
	b=int(d/pow(10,m-1));
	while(m>0){
		b=int(d/pow(10,m-1));
		c=(int(d/pow(10,m-2)))%10;
		cout<<c*10+b;
		f=pow(10,(m-2));
		d=d%f;
		m=m-2;
	}
	cout<<"\n";
	system("pause");
	}
