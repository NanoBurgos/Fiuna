/*Leer un número “n” entero, positivo y menor que 100, verificar si dicho número es: 
       a) par, 
       b) múltiplo de cinco, 
       c) a la vez par y múltiplo de cinco. 
Calcular el factorial de dicho número, imprimir los resultados, indicando los casos.*/

#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{int aux, k, c=1;
float n;
cout<<"Introduzca un numero entero, positivo y menor que 100: "; cin>>n;
while(n<0 || n!=int(n) || n>=100)
          {cout<<"\nEl numero debe ser entero, positivo y menor que 100, digite nuevamente: "; cin>>n;}
aux=int(n);
if(aux%2==0 && aux%5==0)
            {cout<<"\n\nEL NUMERO "<<n<<" ES PAR Y MULTIPLO DE 5\n\n";}
            else
                {if(aux%2==0)
                {cout<<"\n\nEL NUMERO "<<n<<" ES PAR";}
                else
                {cout<<"\n\nEL NUMERO "<<n<<" ES IMPAR";}
                if(aux%5==0)
                {cout<<"\n\nEL NUMERO "<<n<<" ES MULTIPLO DE 5\n\n";}
                else
                {cout<<"\n\nEL NUMERO "<<n<<" NO ES MULTIPLO DE 5\n\n";}}
for(k=1 ; k<=aux; k++)
{c=c*k;}
cout<<"FACTORIAL DE "<<n<<": "<<c<<endl<<endl;
system("pause");}
