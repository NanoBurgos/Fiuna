/*Leer tres numeros A,B y C:
i) Si C es mayor o igual que cero, hallar:...
ii) En caso contrario y si A<B, hallar el valor absoluto de H=(3*B-7*A)/C. Si A no es menor o igual que B, imprimir solo los tres numeros leidos.
Imprimir H, siempre que el mismo pueda ser calculado.*/

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
main()
{float A, B, C, H, Rad, A3, B3;
cout<<"Introduzca el primer numero: "; cin>>A; cout<<endl;
cout<<"Introduzca el segundo numero: "; cin>>B; cout<<endl;
cout<<"Introduzca el tercer numero: "; cin>>C; cout<<"\n\n";
if(C>=0)
{A3=pow(A,3.0);
B3=pow(B,3.0);
Rad=A3 + B3;
H=pow(Rad,(1.0/2.0));
cout<<"H = "<<H<<"\n\n";}
if(C<0 && A<=B)
{H=(((3.0*B)-(7.0*A))/C);}
if(C<0 && A<=B && H>=0)
{cout<<"H = "<<H<<"\n\n";}
if(C<0 && A<=B && H<0)
{H=-H;
cout<<"abs(H) = "<<H<<"\n\n";}
if(C<0 && A>B)
{cout<<"Primer numero: "<<A<<endl;
cout<<"Segundo numero: "<<B<<endl;
cout<<"Tercer numero: "<<C<<"\n\n";} 
system("pause");}
