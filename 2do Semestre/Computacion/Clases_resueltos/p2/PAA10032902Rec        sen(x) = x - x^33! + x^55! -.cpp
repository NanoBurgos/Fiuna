/*
   Calculo de sen(x) utilizando la serie de potencias:
   sen(x) = x - x^3/3! + x^5/5! - ...
   utilizando recursividad
*/
#include<iostream>
#include<math.h>
using namespace std;
float seno( float x, int n );
int main()
{   int n;   float x, xg, pi = 4*atan(1.);
    cout << "\nDigite el numero de terminos de la serie ";
    cin >> n;
    cout << "\nDigite el valor del arco x (en grados sexg.) ";
    cin >> xg;        x = xg/180.*pi;
    cout << "\n\n\tsen(" << x << ") = " << seno(x, n) << "\n\n";
    system( "pause");    }
float seno( float x, int n )
{   int sig;      static float f = 1;
    if ( n%2 != 0 ) sig = 1;
    else sig = -1;
    if ( n == 1 ) return x;
    f *= (2*n-2)*(2*n-1);
    return seno(x, n-1) + sig*pow(x, 2*n-1)/f; }
      
