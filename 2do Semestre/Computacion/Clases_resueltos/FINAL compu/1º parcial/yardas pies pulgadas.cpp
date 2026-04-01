/* Lea dos ternas de numeros enteros positivos y1, f1, i1 e y2, f2, i2, que representan, 
respectivamente, distancias medidas en yardas, pies y pulgadas. Verifique que ambas
son distancias validas y que la primera distancia es mayor que la segunda, sabiendo
que 1 yarda= 3 pies y 1 pie= 12 pulgadas. Luego determine. Imprima la diferencia de 
dichas distancias expresando el resultado en yardas, pies y pulgadas. Imprima, ademas,
esta diferencia en cm, sabiendo que 1 pulgada= 2,54 cm */

#include<iostream>
int valDist( int y, int f, int p );
using namespace std;
int main()
{  int y1, f1, p1, d1, y2, f2, p2, d2, y, f, p, d;
// y1, f1, p1: primera distancia, en yardas, pies y pulgadas.
// y2, f2, p2: segunda distancia, en yardas, pies y pulgadas.
// y, f, p: diferencia entre las distancias, en yardas, pies y pulgadas.
// d1, d2, d: las mismas distancias, expresadas en pulgadas.
// valDist(): función que valida las distancias leidas
   float dcm;
   do {
       do {
           cout << "\n\n\tDigite la primera distancia ";
           cin >> y1 >> f1 >> p1;
       }   while ( valDist( y1, f1, p1 ) );
       do {
           cout << "\n\n\tDigite la segunda distancia ";
           cin >> y2 >> f2 >> p2;
       }   while ( valDist( y2, f2, p2 ) );
       d1 = y1*36 + f1*12 + p1;
       d2 = y2*36 + f2*12 + p2;
   }   while( d1 < d2 );
   d = d1 - d2;
   y = d/36;   f = (d%36)/12;  p = (d%36)%12;
   dcm = d*2.54; 
   cout << "\n\nLa diferencia de distancias es " << y << " yardas ";
   cout << f << " pies y " << p << " pulgadas";
   cout << "\n\n\tEquivalente a " << dcm << " cm";
   cout << "\n\n";
   system ( "pause" );
}
int valDist( int y, int f, int p )
{   int ok = 0;
//  ok: variable que es 0 si la medida de distancia es valida y 1 si no. 
    if ( y < 0 || f < 0 || p < 0 ) ok = 1;
    if ( f > 2 || p > 11 ) ok = 1;
    if ( ok )
       cout << "\n\nDistancia invalida, digite nuevamente ";
    return ok;  }
