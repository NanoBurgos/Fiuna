/* permita obtener recursivamente el mcd de dos números enteros no negativos a y b,
sabiendo que si a<b mcd(a,b)=mcd(a,b-a)*/
#include<iostream>
using namespace std;
int mcd(int a, int b, int c);
int main()
{
	float a, b, aux;
	cout<<"Introduzca un numero a entero y positivo: "; cin>>a;
	while(a!=int(a)||a<=0)
	{
		cout<<"\nel numero introducido debe ser entero y positivo";
		cout<<"\nVuelva a introducir el numero a: "; cin>>a;
	}
	cout<<"\n\nIntroduzca un numero b entero y positivo: "; cin>>b;
	while(b!=int(b)||b<=0)
	{
		cout<<"\nel numero introducido debe ser entero y positivo";
		cout<<"\nVuelva a introducir el numero b: "; cin>>b;
	}
	cout<<"\n\nEl mcd de a="<<a<<" y b="<<b<<" es: ";
	//considerando que a debe ser menor que b
	if(a>b)
	{	aux=a, a=b; b=aux;	}
	cout<<mcd(int(a),int(b-a), int(b-a))<<"\n\n\n";
	system ("pause");
}
int mcd(int a, int b, int c)
{
	int aux;
	if(c>0)
	{
		if( a%c == 0 && b%c == 0 )
		{ aux = c;}
		else
		{ aux = mcd( a, b, c-1);}
	}	
	return aux;
}
