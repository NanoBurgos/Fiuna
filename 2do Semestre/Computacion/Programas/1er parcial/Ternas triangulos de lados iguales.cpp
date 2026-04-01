/*  FILA D - TEMA 1. Elaborar un programa que:
    Lea dos ternas de números flotantes a1, b1, c1 y a2, b2, c2,
    verifique si cumplen las condiciones para que cada terna
    represente los lados de un triángulo, en caso contrario, que
    lo lea nuevamente, luego calcule e imprima las respectivas
    áreas de superficie y un mensaje indicando si uno de los
    triángulos tiene o no, al menos un lado igual a uno de los
    lados del otro.  */
#include<iostream>
#include<math.h>
using namespace std;
int valLados( float a, float b, float c );
float areaTriang( float a, float b, float c );
int main()
{   float a1, b1, c1, s1, a2, b2, c2, s2, p, ctl;
// a1, b1, c1: primera terna.
// a2, b2, c2: segunda terna.
// s1, s2, p: areas de superfices del primer y segundo triangulos.
// p semiperimetro de un triangulo. 
// valLados(): función que verifica si son lados de un triangulo.
// areaTriang(): calcula el area de superficie de un triangulo.
// ctl: es 1 si un lado del primer triangulo es igual a un lado del otro
    do {
       cout << "\n\n\tDigite la primera terna ";
       cin >> a1 >> b1 >> c1;
    }   while ( valLados( a1, b1, c1 ) );
    do {
       cout << "\n\n\tDigite la segunda terna ";
       cin >> a2 >> b2 >> c2;
    }  while ( valLados( a2, b2, c2 ) );
    s1 = areaTriang( a1, b1, c1 );
    s2 = areaTriang( a2, b2, c2 );
    cout << "\n\n El triángulo de lados " << a1 << ", " << b1 << " y " << c1 << " tiene area de superficie igual a " << areaTriang( a1, b1, c1 );
    cout << "\n\n El triángulo de lados " << a2 << ", " << b2 << " y " << c2 << " tiene area de superficie igual a " << areaTriang( a2, b2, c2 );
    ctl = 0;
    if ( a1 == a2 || a1 == b2 || a1 == c2 )
       ctl = 1;
    if ( b1 == a2 || b1 == b2 || b1 == c2 )
       ctl = 1;
    if ( c1 == a2 || c1 == b2 || c1 == c2 )
       ctl = 1;
    if ( ctl )
       cout << "\n\n\tUn lado del primer triángulo es igual a uno de los lados del otro.";
    else
       cout << "\n\n\tEl primer triángulo no tiene lado alguno igual a uno de los lados del otro.";
    cout << "\n\n";
    system( "pause" );
}
int valLados( float a, float b, float c )
{   if ( a <= 0 || b <= 0 || c <= 0 ) return 1;
    if ( a >= b + c || b >= a + c || c >= a + b ) return 1;
    return 0;  }
float areaTriang( float a, float b, float c )
{   float p, s;
    p = ( a + b + c )/2;
    s = p*(p-a)*(p-b)*(p-c);
    return sqrt(s);  }
