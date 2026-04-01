//Elaborar un programa en C++ que calcule e imprima la potencia "x"
//de un numero "N" (N elevado a la x) ingresado desde teclado, a traves de funciones recursivas

#include<iostream>
using namespace std;
int entpos();
float potencia(float n, int x);
main()
{
       int x;
       float n;
cout<<"Ingrese la base N: ";cin>>n;       
cout<<"Ingrese el exponente x: ";cin>>x;
cout<<n<<"^"<<x<<" es= "<<potencia(n,x)<<"\n";
            
system("pause");      
}


float potencia(float n, int x)
{
if (x==0)
return 1;
else
return (n*potencia(n,x-1));
               
}
