/*Leer un numero “n” y luego repetir n-veces el siguiente proceso:
i) Leer x.
ii) Imprimir su cuadrado y su raíz cúbica.*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std; 
main()
{float n, x, i=1, aux, sqrt3;
cout<<"Introduzca el numero (entero y positivo) de repeticiones del proceso: "; cin>>n; cout<<endl;
while(n<0 || n!=int(n))
          {cout<<"EL NUMERO DEBE SER ENTERO Y POSITIVO, DIGITE NUEVAMENTE: "; cin>>n; cout<<"\n\n";}
while(i<=n)
         {cout<<"Introduzca un numero: "; cin>>x; cout<<endl;
         aux=x*x; sqrt3=pow(x, 1.0/3.0);
         cout<<"El cuadrado de "<<x<<" es: "<<aux<<endl;
         cout<<"La raiz cubica de "<<x<<" es: "<<sqrt3<<"\n\n";
         i++;}
system("pause");}
