/* Dado un numero entero y posirivco, descomponerlo en sus factores primos. */
#include<iostream>
using namespace std;
int main()
{   int nro, aux, i, cont, div;
    float nrof;
    for ( i = 0; i < 3; i++ )
    {  cout << "\n\n\tDigite un numero entero y positivo ";
       cin >> nrof;
       nro = (int)nrof;
       if ( nrof > 0 && nrof == nro ) break;
       cout << "\n\nEl numero debe ser entero y positivo ";   }
    if ( i < 3 )
    {  cout << "\n\n" << nro << " = 1";
       aux = nro;
       for ( div = 2; div <= nro; div++ )
       {   if ( aux%div == 0 )
           {  cont = 1;   aux = aux/div;
              while ( aux%div == 0 )
              {   cont++;
                  aux = aux/div;  }
              cout << "*" << div;
              if ( cont > 1 ) cout << "^" << cont;   }   }   }
    else
       cout << "\nSe excedio el numero de intentos posibles";
    cout << "\n\n";
    system ( "pause" );
}
