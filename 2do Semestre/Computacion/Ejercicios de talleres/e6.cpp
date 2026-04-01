#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int m, i=2, e, z, a, x=0, y=1, b, c, d,ma=0,me=1;
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
	 
	m=e;
	d=a;
	while(m>0){
		c=pow(10,(m-1));
		b=int(d/c);
		if(me>b){
			me=b;
		}
		if(ma<b){
			ma=b;
		}
		d=d%c;
		m=m-1;
	}
	cout<<"\n el mayor es: "<<ma<<"\n";
	cout<<"\n el menor es: "<<me<<"\n";
	cout<<"\n";
	system("pause");
	}
