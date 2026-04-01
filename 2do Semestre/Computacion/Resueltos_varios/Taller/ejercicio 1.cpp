/*Leer los números de tipo entero a y b, y de coma flotante c y d; luego, exhibir 
dichos números en la pantalla e imprimir el valor de las variables e=a+c (e de tipo entero) 
y f= b*d (f de coma flotante)*/

#include<iostream>
#include<stdlib.h>
using namespace std;
main()
{int a, b, e;
float c,d, f;
cout<<"Introduzca el primer numero (entero): "; cin>>a;
if(a!=int (a))
cout<<"volver a introducir\a";
cout<<"\nIntroduzca el segundo numero (entero): "; cin>>b;
cout<<"\nIntroduzca el tercer numero: "; cin>>c;
cout<<"\nIntroduzca el cuarto numero: "; cin>>d;
cout<<"\n\n1er numero: "<<a<<"\n2do numero: "<<b<<"\n3er numero: "<<c<<"\n4to numero: "<<d;
e=a+c;
f=b*d;
cout<<"\n\nLa suma entera del 1er y 3er numero es: "<<e;
cout<<"\nEl producto del 2do y 4to numero es: "<<f<<"\n\n";
system("pause");
return 0;}
