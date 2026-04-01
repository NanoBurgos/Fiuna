// Generacion de nuimeros al azar
#include<iostream>
using namespace std;
int main()
{   int i, n;
    cout << "\nDigite cuantos numeros quiere generar ";
//    cout << "\nEl mayor posible es " << RAND_MAX << "\n";
//    cout << time( NULL ) << "\n";
// Simulacion del lanzamiento de un dado
    srand( time ( NULL ) );
    cin >> n;
    for ( i = 0; i < n; i++ )
        cout << "\t" << rand()%999+1;
    system( "pause" );
}
    
