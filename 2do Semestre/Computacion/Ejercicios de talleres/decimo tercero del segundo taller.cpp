/* Permita obtener recursivamente valores de la función:
		F(a,b)=0 si a<b y F(a,b)=F(a-b,b)+1, ( a, b) pertenecen a N. */
#include<iostream>
using namespace std;
int F(int a, int b);
int main()
{
	float a, b;
	cout<<"Introduzca un numero a entero y positivo: "; cin>>a;
	while(a!=int(a)||a<=0)
	{
		cout<<"\nEl numero introducido debe ser entero y positivo.";
		cout<<"\nVuelva introducir el numero a: "; cin>>a;
	}
	cout<<"Introduzca un numero b entero y positivo: "; cin>>b;
	while(b!=int(b)||b<=0)
	{
		cout<<"\nEl numero introducido debe ser entero y positivo.";
		cout<<"\nVuelva introducir el numero b: "; cin>>b;
	}
	cout<<"\n\nEl valor de la funcion para ("<<a<<","<<b<<") es: "<<F(int(a),int(b))<<"\n\n\n";	
	system ("pause");
} 
int F(int a, int b)
{
	int n;
	if(a<b){n=0;}
	else{n=F(a-b,b)+1;}
	return n;
}
