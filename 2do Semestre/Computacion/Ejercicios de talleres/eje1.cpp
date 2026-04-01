//Luis A. Morinigo L. Ejercicio 1-Computacion 2016
#include<iostream>
using namespace std;
main()
{
	int n,j,i,may=0,pmay;
	do{
		cout<<"Ingrese un numero: ";cin>>n;
	}while(n>=10 || n<0 || n!=int(n)); //Validacion de datos
	for(i=1;i<=n;i++) //bucle para ingresar los n numeros
	{
		cout<<"Ingrese el "<<i<<" numero: ";cin>>j; //se ingresan los n numeros
		if(j>may) //condicion para cargar el mayor
		{
			may=j;
			pmay=i;
		}
	}
	cout<<"el mayor es: "<<may<<" y su posicion: "<<pmay<<endl; //imprime en pantalla el mayor y su posicion
	system("pause");
}
