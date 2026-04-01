/*Utilizando variables simples: leer las coordenadas cartesianas de tres puntos distintos del plano XOY, y determinar la ecuacion 
de la cia. que pasa por los tres puntos. Si los puntos pertenecen a una misma recta imprimir "LOS PUNTOS PERTENENCEN A UNA MISMA RECTA"*/
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float xa, xb, xc, ya, yb, yc, p, m, l, D, E, F, h, k, g;
    cout<<"\n\tINGRESE LOS VALORES DE LAS COORDENADAS DE A, B, C\n\t";
    cout<<"\n\txa="; cin>>xa; cout<<"\n\tya="; cin>>ya;
    cout<<"\n\txb="; cin>>xb; cout<<"\n\tyb="; cin>>yb;
    cout<<"\n\txc="; cin>>xc; cout<<"\n\tyc="; cin>>yc;
    if((ya-yb)/(xa-xb)!=(ya-yc)/(xa-xc))
    {
    p=-(xa*xa+ya*ya); m=-(xb*xb+yb*yb); l=-(xc*xc+yc*yc);
    E=((m-p)*(xc-xa)-(l-p)*(xb-xa))/((ya-yc)*(xb-xa)-(ya-yb)*(xc-xa));
    D=(m-p+E*(ya-yb))/(xb-xa);
    F=(p-D*xa-E*ya);
    h=-(D/2); 
    k=-(E/2);
    g=pow(h*h+k*k-F,0.5);
    cout<<"\n\tLA ECUACION GENERAL DE LA CIA ES= X^2 + Y^2 + "<<D<<" *X + "<<E<<" *Y + "<<F<<" = 0";
    cout<<"\n\tEL RADIO ES "<<g<<" Y EL CENTRO DE LA CIA ES "<<h<<" y "<<k;
    cout<<"\n";
}
    else 
    {cout<<"\n\tLOS PUNTOS PERTENECEN A UNA MISMA RECTA"; 
    cout<<"\n";}
    system ("PAUSE");
    return main ();
}
