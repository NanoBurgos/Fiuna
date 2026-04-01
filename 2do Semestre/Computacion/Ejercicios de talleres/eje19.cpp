//Luis A. Morinigo L. Ejercicio 19-Computación 2016
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float n;
	int x,r=1,d=0,inv=0,c=0,k=1,i;
	do{
		cout<<"ingrese un numero: ";cin>>n;
	}while(n<0 || n!=int(n));
	x=int(n);
	while(x>0)
	{
		r=x%10;
		x=x/10;
		inv=inv*10+r;	
	}
	if(inv>n)
	d=inv-n;
	else
	d=n-inv;
	cout<<"La inversa es: "<<inv<<endl;
	cout<<"La diferencia es: "<<d<<endl;
	system("pause");
}
