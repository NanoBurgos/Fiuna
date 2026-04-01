/*  FILA E - TEMA 1. Elaborar un programa que:
    Lea dos ternas de números enteros y positivos g0, m0, s0 y
    gf, mf, sf  que representan, respectivamente, en grados,
    minutos y segundos sexagesimales la medida de dos arcos
    menores que un giro. Verifique que ambas ternas son medidas
    de arcos válidas y que el segundo arco mayor que el primero,
    luego determine e imprima la diferencia entre dichos arcos,
    en grados minutos y segundos.  */
#include<iostream>
int valArco( int g, int m, int s );
using namespace std;
int main()
{  int g1, m1, s1, a1, g2, m2, s2, a2, g, m, s, d;
// g1, m1, s1: primer arco, en grados, minutos y segundos sexagecimales.
// h2, m2, s2: segundo arco, en grados, minutos y segundos sexagecimales.
// g, m, s: diferencia de los arcos, en grados, minutos y segundos.
// a1, a2: los mismos arcos, expresados en segundos sexagecimales.
// d: diferencia entre los dos arcos, en segundos.
// valArco(): función que valida la medida de los arcos leidas.
   do {
       do {
           cout << "\n\n\tDigite el primer arco  ";
           cin >> g1 >> m1 >> s1;
       }   while ( valArco( g1, m1, s1 ) );
       do {
           cout << "\n\n\tDigite el segundo arco ";
           cin >> g2 >> m2 >> s2;
       }   while ( valArco( g2, m2, s2 ) );
       a1 = g1*3600 + m1*60 + s1;
       a2 = g2*3600 + m2*60 + s2;
   }   while( a1 > a2 );
   d = a2 - a1;
   g = d/3600;   m = (d%3600)/60;  s = (d%3600)%60;
   cout << "\n\nLa diferencia entre los arcos es " << g << " grados ";
   cout << m << " minutos y " << s << " segundos";
   cout << "\n\n";
   system ( "pause" );
}
int valArco( int g, int m, int s )
{  int ok;
//  ok: variable que es 0 si el arco leido es valido y 1 si no. 
   if ( g < 0 || m < 0 || s < 0 ) ok = 1;
   if ( g > 360 || m > 60 || s > 60 ) ok = 1;
   if ( ok )
      cout << "\n\nHora invalida, digite nuevamente ";
   return ok;  }
