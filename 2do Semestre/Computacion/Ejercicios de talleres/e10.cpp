#include<iostream>
using namespace std;
main()
{
	int b, c=1,d,i=2;
	float a;
	cout<<"Ingrese un valor entero y positivo: ";
	while(c<2){
		cin>>a;
		if(a<0 || int(a)!=a){
			cout<<"\nIngrese un valor entero y positivo: ";
		}
		if(a>0 && int(a)==a){
			c++;
		}
		
	}
	cout<<"\nLa descomposicion en factores del numero es: 1";
		while(i<a+1){
			if(int (a)%i==0){
				b=i;
				a=a/i;
				cout<<"x"<<b;
				while(int(a)%i==0){
					a=a/i;
					cout<<"x"<<b;
					
				}
			}	
			i++;
		}
		cout<<"\n";
	system("pause");
}
