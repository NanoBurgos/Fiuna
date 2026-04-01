/*  FILA A - TEMA 1. Elaborar un programa que:
    Lea dos ternas de números enteros positivos g1, q1, p1 y
    g2, q2, p2, que representan, respectivamente, las medidas de
    capacidad en galones, cuartos y pintas. Verifique que ambas son
    medidas de capacidad válidas y que el primer volumen es mayor
    que el segundo, sabiendo que 1 galón = 4 cuartos y
    1 cuarto = 2 pintas. Luego determine e imprima la diferencia
    de los volúmenes, expresando el resultado en galones, cuartos y
    pintas. Imprima además esta diferencia en litros, sabiendo que
     1 pinta = 0,47 litros.*/
#include<iostream>
int valCapacidad( int g, int q, int p );
using namespace std;
int main()
{  int g1, q1, p1, c1, g2, q2, p2, c2, g, q, p, d;
// g1, q1, p1: primera distancia, en yardas, pies y pulgadas.
// g2, q2, p2: segunda distancia, en yardas, pies y pulgadas.
// g, q, p: diferencia entre las distancias, en yardas, pies y pulgadas.
// c1, c2, d: las mismas distancias, expresadas en pulgadas.
// valCapacidad(): función que valida las capacidades leidas
   float dl;
   do {
       do {
           cout << "\n\n\tDigite la primera capacidad ";
           cin >> g1 >> q1 >> p1;
       }   while ( valCapacidad( g1, q1, p1 ) );
       do {
           cout << "\n\n\tDigite la segunda capacidad ";
           cin >> g2 >> q2 >> p2;
       }   while ( valCapacidad( g2, q2, p2 ) );
       c1 = g1*8 + q1*2 + p1;
       c2 = g2*8 + q2*2 + p2;
   }   while( c1 < c2 );
   d = c1 - c2;
   g = d/8;    q = (d%8)/2;   p = (d%8)%2;
   dl = d*0.47;
   cout << "\n\nLa diferencia de capacidades es " << g << " galones ";
   cout << q << " cuartos y " << p << " pintas";
   cout << "\n\n\tEquivalente a " << dl << " l";
   cout << "\n\n";
   system ( "pause" );
}
int valCapacidad( int g, int q, int p )
{   int ok = 0;
//  ok: variable que es 0 si la medida de capacidad es valida y 1 si no. 
    if ( g < 0 || q < 0 || p < 0 ) ok = 1;
    if ( q > 3 || p > 1 ) ok = 1;
    if ( ok )
       cout << "\n\nCapacidad invalida, digite nuevamente ";
    return ok;  }
