//Luis A. Morinigo L. Ejercicio 12-Compu 2016
#include<iostream>
using namespace std;
main()
{
	int n,i;
	do{
		cout<<"Ingrese un numero: ";cin>>n;
	}while(n<0 || n!=int(n)); //validación de numeros
	for(i=2;i<=n;i++)//bucle para divisores
	{
		if(n%i==0) //condicion para que sea divisor
		{
		cout<<i<<"*"; //imprime los divisores
		n=n/i; //disminuye el numero original
		i--;}
	}
	cout<<n<<endl; //imprime el ultimo factor
	system("pause");
}
