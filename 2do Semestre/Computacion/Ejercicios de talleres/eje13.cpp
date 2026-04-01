//Luis A. Morinigo L. Ejercicio 13-Computación 2016
#include<iostream>
using namespace std;
main()
{
	float n;
	int x, r, bin=0,k=1;
	do{
		cout<<"Ingrese un numero en base 10: ";cin>>n;
	}while(n!=int(n) || n<0);
	x=int(n);
	while(x>0)
	{
		r=x%2;
		x=x/2;
		bin=bin+k*r;
		k=k*10;
	}
	cout<<"El numero "<<n<<" en binario es: "<<bin<<endl;
	system("pause");
}
