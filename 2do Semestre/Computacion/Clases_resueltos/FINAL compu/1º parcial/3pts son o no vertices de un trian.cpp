/*Utilizando variables simples: leer las coordenadas cartesianas de tres puntos distintos del plano XOY. Determinar,
si son o no vertices de un triángulo. Si lo son, imprimir, según el caso, si el triángulo es isósceles, equilátero o
escaleno.*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float d1, d2, d3, xa, xb, xc, ya, yb, yc;
    cout<<"\n\tINGRESE LOS VALORES DE LAS COORDENADAS DE A, B, C\n\t";
    cout<<"\n\txa="; cin>>xa; cout<<"\n\tya="; cin>>ya;
    cout<<"\n\txb="; cin>>xb; cout<<"\n\tyb="; cin>>yb;
    cout<<"\n\txc="; cin>>xc; cout<<"\n\tyc="; cin>>yc;
    if((ya-yb)/(xa-xb)!=(ya-yc)/(xa-xc))
      {
         cout<<"\n\tLOS PUNTOS SON VERTICES DE UN TRIANGULO\n\t";
         d1=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
         d2=sqrt((xc-xb)*(xc-xb)+(yc-yb)*(yc-yb));
         d3=sqrt((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya));
         if(d1==d2 && d1==d3 && d2==d3)
         {cout<<"\n\tEL TRIANGULO ES EQUILATERO\n\t";}
         else if(d1!=d2 && d1!=d3 && d2!=d3)
         {cout<<"\n\tEL TRIANGULO ES ESCALENO\n\t";}
         else
         cout<<"\n\tEL TRIANGULO ES ISOSCELES\n\t";
         }
    else
    {cout<<"\n\tLOS PUNTOS NO SON VERTICES DE UN TRIANGULO\n\t";}
    system ("pause");
    return main ();
}
