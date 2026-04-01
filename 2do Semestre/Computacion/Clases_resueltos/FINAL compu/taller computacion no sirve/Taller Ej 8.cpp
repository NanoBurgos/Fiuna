/*Leer un numero “n” entero y positivo (validarlo), y un numero de punto flotante “x”. 
A continuación determine e imprima el valor de S, dado por la formula*/

#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{int a=-1, sig, aux=-1;
float n, x, i, S=1;
cout<<"Introduzca un numero entero y positivo: "; cin>>n; cout<<endl;
while(n<0 || n!=int(n))
          {cout<<"EL NUMERO DEBE SER ENTERO Y POSITIVO, DIGITE NUEVAMENTE: "; cin>>n; cout<<"\n\n";}
cout<<"Introduzca otro numero: "; cin>>x;
for(i=1; i<=n; i++)
         {aux=aux*a; sig=aux*a;
                  if(sig<0)
                  {sig=-1;}
                  else
                  {sig=1;}
         S=S + sig*((x*i +float(1))/(float(2)*i +float(1)));}
cout<<"\nLa sumatoria es: "<<S<<endl<<endl;      
system("pause");}
