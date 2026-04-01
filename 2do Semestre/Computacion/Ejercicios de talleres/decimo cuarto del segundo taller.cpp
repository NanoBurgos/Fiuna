/* Permita obtener recursivamente valores de la función: F(0)=0; F(1)=1
y si n>1; n pertnece a los Natrurales , entonces F(n)=F(n-2)+F(n-1) */
#include<iostream>
using namespace std;
int F(float a);
int main ()
{
	float n;
	cout<<"Introduzca un numero natural: "; cin>>n;
	while(n!=int(n)||n<0)
	{	cout<<"\nEl numero introducido no es un numero natural.";
		cout<<"\nVuelva a introducir el numero: "; cin>>n;	}
	cout<<"\nEl valor de la funcion para n="<<n<<" es: "<<F(n)<<"\n\n\n";	
	system ("pause");
}
int F(float a)
{
	if(a==0)	a=0;
	if(a==1)	a=1;
	if(a>1)	a=F(a-2)+F(a-1);
	return a;
}
