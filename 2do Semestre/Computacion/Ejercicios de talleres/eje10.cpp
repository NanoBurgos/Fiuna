//Luis A. Morinigo L. Ejercicio 10-Computacion 2016
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int n,x,i,factn=1;
	float s;
	do{
		cout<<"ingrese n: ";cin>>n; //Validacion
	}while(n<0 || n!=int(n));
	cout<<"ingrese x: ";cin>>x;
	for(i=1;i<=n;i++) //Bucle para hallar el factorial
	{
		factn=factn*i;
	}
	for(i=0;i<=n;i++) //Bucle para la serie
	{
		s=2+(pow(x,n))/factn;
	}
	cout<<"La serie es: "<<s<<endl;
	system("pause");
}
