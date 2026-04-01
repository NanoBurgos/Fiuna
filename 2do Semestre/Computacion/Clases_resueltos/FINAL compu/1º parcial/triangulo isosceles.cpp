/*Leer dos numeros enteros y positivos. Si pueden ser lados de un triangulo, imprimir el perimetro y area del triangulo
isosceles cuyo lado distinto es el primer numero introducido y el segundo corresponde a los otros dos. Imprimir un mensaje de error 
en caso de que las medidas no sean validas para formar un triangulo.*/ 
#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int a, b, p, h, A;
    cout<<"\n\tINGRESE LOS VALORES DE;";
    cout<<"\n\ta="; cin>>a;
    cout<<"\n\tb="; cin>>b;
    if(a<2*b)
    {
             p=b+b+a;
    h=sqrt(b*b-(a*a)/4); 
    A=(a*h)/2;
    cout<<"\n\tEL PERIMETRO DEL TRIANGULO ES = " <<p<<"\n";
    cout<<"\n\tEL AREA DEL TRIANGULO ES = " <<A<<"\n";
}
    else
    cout<<"\n\tLOS LADOS NO PUEDEN FORMAR UN TRIANGULO";
    system ("PAUSE");
    return main ();
}
