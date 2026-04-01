/*
   Determinar si una curva, de ecuacion dada, corta o
   no al eje x en un intervalo dado
*/
#include<iostream>
using namespace std;
float func( float x );
int main()
{  float a, b, h, x, y1, y2;
   cout << "\n\nDigite los extremos del intervalo ";
   cin >> a >> b;
   x = a;     y1 = func( x );
   h = ( b - a )/100;
   x += h;    y2 = func( x );
   while ( y1*y2 > 0 && x <= b )
   {   y1 = y2;  x += h;  y2 = func( x );  }
   cout << "\n\nEn el intervalo [" << a << ", " << b << "] ";
   if ( x > b ) cout << "la curva no corta al eje eje x";
   else cout << "la curva corta al eje eje x";
   cout << "\n\n";
   system ( "pause" );
}
float func( float x )
{  float y;
   y = x*x - 7*x + 12;
   return y;   }
