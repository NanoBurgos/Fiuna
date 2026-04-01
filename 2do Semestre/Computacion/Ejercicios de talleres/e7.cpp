#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a, y=1,b,c;
	string d="";
cout<<"Ingrese un numero entero ";
	cin>>a;
	b=a;
	cout<<"\n el numero en binario es: ";		
	while(y<2) {
		if(b<2){
			y++;
		}
		c=b%2;
		b=b/2;	
		if(c==1){
		d="1" + d;
		}
		if(c==0){
		d="0" + d;
		}
	}
	cout<<d;
	cout<<"\n";
	system("pause");
	}
