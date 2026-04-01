/* Que acepte como entrada un numero entero y positivo N y dos conjuntos de N numeros
de punto flotante, imprimir luego ambos conjuntos y el número que resulta como la suma
de los productos de los elementos del primer conjunto por los correspondientes del
segundo conjunto de números. */
#include<iostream>
using namespace std;
int main()
{
	float n;
	cout<<"Introduzca un numero N entero y positivo: "; cin>>n;
	while(n<=0||n!=int(n))
	{
		cout<<"\nRecuerde que el numero debe ser entero y positivo";
		cout<<"\nVuelva a introducir el número:  ";
		cin>>n;
	}	
	
	float A[int(n)], B[int(n)], suma=0;
	int j;
	cout<<"\n\nIntroduzca los elemntos N del primer cojunto...\n";
	for(j=1;j<=n;j++)
	{
		cout<<"\nIntroduzca el elemento "<<j<<" :   ";
		cin>>A[j];
	}
	
	cout<<"\n\nIntroduzca los elemntos N del segundo cojunto...\n";
	for(j=1;j<=n;j++)
	{
		cout<<"\nIntroduzca el elemento "<<j<<" :   ";
		cin>>B[j];
	}
	
	cout<<"\n\nLa suma de los productos de los elementos correpondientes de los conjuntos es:\n\n";
	
	for(j=1;j<=n;j++)
	{
		suma = suma + A[j]*B[j];
	}
	
	cout<<suma<<"\n\n\n\n";
	system ("pause");
}
