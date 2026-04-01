// Programa que determina el valor de una serie
#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int n;
    float x = 2.5, s = 0;
    for ( n = 1; n <= 50; n++ )
        s += 7*sin(3*n*x)*cos(n*x);
    cout << "\n\ts = " << s << "\n";
    system ( "pause" );
}
