#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a, y=1,b,c;

cout<<"Ingrese un numero entero ";
	cin>>a;
	cout<<"\n La Conjetura de Collatz de su numero es:  ";
	while(a!=1){
		if(a%2==0){
			a=a/2;
		}
		else{
			a=(a*3)+1;
		}
		cout<<a<<"   ";
	}
	cout<<"\n";
	system("pause");
	}
