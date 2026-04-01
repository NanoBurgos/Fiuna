/*Leer dos números enteros y positivos (validarlos), considerar que de los números leídos, 
el primero corresponde al lado distinto de un triángulo isósceles y el segundo leído a los
lados iguales. Imprimir el perímetro y el área de dicho triángulo. Si, los números leídos,
no son válidos como medidas de un triángulo, imprimir un mensaje de error.*/
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
main()
{
float a, b, P, p, A;
cout<<"Introduzca el valor correspondiente al lado desigual del triangulo isosceles= "; cin>>a;
while (a<=0 || a!=int(a))
{cout<<"El numero tiene que ser entero y positivo, introduzca un nuevo valor= ";cin>>a;}
cout<<"Introduzca el valor correspondiente a los lados iguales del triangulo isosceles= "; cin>>b;
while (b<=0 || b!=int(b))
{cout<<"El numero tiene que ser entero y positivo, introduzca un nuevo valor= ";cin>>b;}
while (b+b<a || a+b<b)
{cout<<"Los numeros no son validos como medidas de triangulos, introduzca el valor del lado desigual= ";
cin>>a;
while (a<=0 || a!=int(a))
{cout<<"El numero tiene que ser entero y positivo, introduzca un nuevo valor= ";cin>>a;}
cout<<"Introduzca el valor del lado igual= "; cin>>b;
while (b<=0 || b!=int(b))
{cout<<"El numero tiene que ser entero y positivo, introduzca un nuevo valor= ";cin>>b;}}
P=a+b+b;
p=P/2;
A=sqrt(p*(p-a)*(p-b)*(p-b));
cout<<"El perimetro del triangulo es= "<<P<<endl;
cout<<"El area del triangulo es= "<<A<<endl;
      
system("pause");}
