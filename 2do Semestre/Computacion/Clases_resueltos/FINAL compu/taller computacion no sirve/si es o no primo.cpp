/*Leer un número entero positivo (validarlo). Verificar si dicho número es o no un primo. 
Imprimir el resultado según sea el caso.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{int d, aux, k=0;
float n;
cout<<"Introduzca un numero: "; cin>>n;
while((n<0) || n!=int(n))
            {cout<<"\nEl numero debe ser entero y positivo, digite nuevamente: "; cin>>n;}
aux=int(n);
for(d=2; d<aux; d++)
         if(aux%d==0)
         {k++;}
if(k==0)
{cout<<"\n\nEL NUMERO "<<n<<" ES PRIMO\n\n";}
           else
           {cout<<"\n\nEL NUMERO "<<n<<" NO ES PRIMO\n\n";}
system("pause");}
