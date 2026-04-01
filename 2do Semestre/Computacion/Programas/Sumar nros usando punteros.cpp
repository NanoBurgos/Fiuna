/*Elaborar un programa que permita la suma de 2 valores ingresados desde teclado, mediante el uso de punteros*/

#include<iostream>
using namespace std;
main()
{
int *x,*y, a, b,z;
cout<<"\nIntroduzca un valor para las variables a sumar\n";
cout<<"a= ";cin>>a;
cout<<"b= ";cin>>b;
x=&a;
y=&b;
z=*x+*y;
cout<<"\nEl valor es "<<x<<" .\n";
cout<<"\nEl valor es "<<y<<" .\n";
cout<<"\nEl valor es "<<z<<" .\n";
system("pause");
}
// *puntero: el valor al que apunta
// &variable: la direccion
