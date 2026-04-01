//Luis A. Morinigo L. Ejercicio 11-Computación 2016
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	int n,a,c=0;
	srand(time(NULL));
	a=rand()%99+1;
	cout<<a<<endl;
	cout<<"Ingrese un numero: ";cin>>n;
	c++;
	while(n!=a)
	{
	if(n>a)
		{
		cout<<"el numero es menor: ";cin>>n;
		c++;}
	else
		{
		cout<<"El numero es mayor: ";cin>>n;
		c++;}
	}
	if(n==a)
	{
		cout<<"ACERTASTE "<<endl;
	}
	cout<<"Numero acertado, intentos: "<<c<<endl;
	system("pause");
}
