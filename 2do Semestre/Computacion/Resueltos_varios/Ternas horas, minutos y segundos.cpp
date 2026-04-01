/*  FILA C - TEMA 1. Elaborar un programa que:
    Lea dos ternas de números enteros y positivos h0, m0, s0 y
    hf, mf, sf que representan, respectivamente, la hora, minutos y
    segundos inicial y final de un proceso realizado en el mismo día.
    Verifique que ambas ternas son horas válidas como indicaría un
    reloj que marca 24 horas, y, que la hora final es posterior a la
    inicial, si no leer nuevamente, luego determine e imprima cuanto
    duró el proceso, en horas minutos y segundos.  */
#include<iostream>
int valHora( int h, int m, int s );
using namespace std;
int main()
{  int h1, m1, s1, t1, h2, m2, s2, t2, h, m, s, t;
// h1, m1, s1: instante inicial, en horas, minutos y segundos.
// h2, m2, s2: instante final, en horas, minutos y segundos.
// h, m, s: diferencia de tiempo, en horas, minutos y segundos.
// t1, t2: los mismos instantes, expresados en segundos.
// t: duracion del proceso, en segundos.
// valHora(): función que valida las horas leidas.
   do {
       do {
           cout << "\n\n\tDigite la hora inicial ";
           cin >> h1 >> m1 >> s1;
       }   while ( valHora( h1, m1, s1 ) );
       do {
           cout << "\n\n\tDigite la hora final   ";
           cin >> h2 >> m2 >> s2;
       }   while ( valHora( h2, m2, s2 ) );
       t1 = h1*3600 + m1*60 + s1;
       t2 = h2*3600 + m2*60 + s2;
   }   while( t1 > t2 );
   t = t2 - t1;
   h = t/3600;   m = (t%3600)/60;  s = (t%3600)%60;
   cout << "\n\nLa duracion del proceso fue de " << h << " horas ";
   cout << m << " mnutos y " << s << " segundos";
   cout << "\n\n";
   system ( "pause" );
}
int valHora( int h, int m, int s )
{  int ok;
//  ok: variable que es 0 si la hora leida es valida y 1 si no. 
   if ( h < 0 || m < 0 || s < 0 ) ok = 1;
   if ( h > 24 || m > 60 || s > 60 ) ok = 1;
   if ( ok )
      cout << "\n\nHora invalida, digite nuevamente ";
   return ok;  }
