/* Permita obtener recursivamente la función F(n)=0 si n=1; si no, F(n)=F(int(n/2))+1,
siendo n un número entero positivo */
#include<iostream>
using namespace std;
int F(int n);
int main()
{
	float n;
	cout<<"Introduzca un numero n entero y positivo: "; cin>>n;
	while(n!=int(n)||n<=0)
	{
		cout<<"\nEl numero introducido debe ser entero y positivo.";
		cout<<"\nVuelva a introducir el numero n: "; cin>>n;
	}
	cout<<"El valor de la funcion para n="<<n<<" es: "<<F(int(n))<<"\n\n\n";	
	system ("pause");
}
int F(int n)
{
	
	if(n==1){n=0;}
	else{n=F(int(n/2))+1;}
	return n;
}
