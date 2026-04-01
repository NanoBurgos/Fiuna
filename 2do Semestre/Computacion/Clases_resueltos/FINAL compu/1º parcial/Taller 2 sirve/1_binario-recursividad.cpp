/*Solicite al usuario un número entero y positivo n (valide).
Realice la conversión de dicho número al sistema binario mediante una 
función recursiva, y despliegue en pantalla el número n 
y su conversión a binario.*/
#include<iostream>
using namespace std;
int validacion();
int binario(int);
int n,nume,bi;
int main()
{cout<<"Ingrese un numero enterto y positivo: \n"<<"n=";
 n=validacion(); 
 cout<<"El numero n es:\t"<<n <<"\n" ;
 
 cout<<"El numero BINARIO  es \n";
 cout<<binario(
n);
 
 system("PAUSE");
 return 0;
}
    //validacion
int validacion()
{ cin>>n;
  while(n<=0||n!=int(n))
  {cout<<"El numero debe ser entero y positivo \n\t Digite nuevamente:";
  cin>> n; 
  }
  return n;
}
//Conversion a Binario
int binario (int n)
{if (n!=0)
{binario(n/2);
cout<<(n%2);} 
return n;}


