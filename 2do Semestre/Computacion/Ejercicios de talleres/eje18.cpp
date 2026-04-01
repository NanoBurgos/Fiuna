//Luis A. Morinigo L. Ejercicio 18-Computación 2016
#include<iostream>
using namespace std;
main()
{
	int n,a=1,b=1,c=1,d=1,e=1,s1=0,s2=0;
	do{
		cout<<"Ingrese un numero n: ";cin>>n;
	}while(n!=int(n) || n<=10000 || n>=100000);
		a=n%10;
		n=n/10;
		b=n%10;
		n=n/10;
		c=n%10;
		n=n/10;
		d=n%10;
		n=n/10;
		e=n%10;
		s1=a+c+e;
		s2=b+d;
	cout<<"la suma de impares es: "<<s1<<endl;
	cout<<"la suma de pares es: "<<s2<<endl;
	system("pause");
}
