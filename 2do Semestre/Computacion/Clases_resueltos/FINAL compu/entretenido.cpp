/*  Un número n es entretenido si cumple simultáneamente con las siguientes dos condiciones:
    i)  De los dígitos de n, el más grande aparece exactamente una vez.
    ii) Si a n se le quita su dígito más grande queda un número primo.
    Elaborar un programa que determine la cantidad de números entretenidos menores que
    100000 y mostrarlo en pantalla. (Nota: 0 y 1 no son primos) */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{   int i, j, k, d, l, n, ls, nro, nNew, dig[6];
    int div[] ={ 100000, 10000, 1000, 100, 10, 1 };
    l = 0;  ls = 1000;
    for ( n = 20; n < ls; n++ )
    {   nro = n;
        for ( i = 0; i < 6; i++ )
        {   dig[i] = nro/div[i];
            nro %= div[i];   }
        k = 0;
        for ( i = 0; i < 6; i++ )          // Determina el digito mayor
            if ( dig[i] > dig[k] )  k = i;
        j = 0;
        for ( i = 0; i < 6; i++ )          // Cuenta las repeticiones
            if ( dig[i] == dig[k] ) j++;
        if ( j == 1 )
        {   nNew = 0;   j = 5;
            for ( i = 5; i >= 0; i-- )
            {   if ( i != k )
                {   nNew += dig[i]*div[j];
                    j--;   }  }
            if ( nNew != 0 && nNew != 1 )
            {   d = 2;
                while ( nNew%d ) d++;
                if ( d == nNew ) 
                {   cout << "\nEl numero " << n << " es un numero entretenido ";
                    l++;
                    if ( l%24 == 0 )
                    {   cout << "\n";
                        system ( "pause" );    }    }   }   }
    }
    cout << "\nExisten " << l << " numeros entretenidos menores que " << ls << "\n";
    system ( "pause" );
}
