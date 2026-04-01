/*
Solicite al usuario un número entero y positivo n (valide). Realice la suma de 
sus dígitos mediante una función recursiva y despliegue en pantalla el número 
n y la suma de sus dígitos.
*/
#include<iostream>
using namespace std;
int validacion();
int suma_cifra(int  );
int n ,numero,suma=0;
int main()
{cout<<"Ingrese un numero enterto y positivo: \n"<<"n=";
 n=validacion(); 
 cout<<"El numero n es:\t"<< n <<"\n" ;
 cout<<"La suma de sus digitos es"<<" "<<suma_cifra(n)<<"\n"; 
 system("PAUSE");  
 return 0;}
    //validacion
int validacion()
{ float n;
  cin>>n;
  while(n<=0||n!=int(n))
  {cout<<"El numero debe ser entero y positivo \n\t Digite nuevamente:";
  cin>>n;
  }
  return int(n);
}
// FUNCION RECURSIVA SUMA
int suma_cifra(int numero)
{do
 { suma=suma+(numero%10) ;
  numero=numero/10;}while(numero>0);
  return suma; }
