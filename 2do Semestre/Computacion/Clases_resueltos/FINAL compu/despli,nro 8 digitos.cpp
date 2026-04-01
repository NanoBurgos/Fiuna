/*  Elaborar un programa que despliegue todos los números de ocho dígitos que no
    contengan al cero ni tampoco dos dígitos pares consecutivos */
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{   int i, j, k, d, l, n, ls, nro, nNew, dig[6];
    int div[] ={ 100000, 10000, 1000, 100, 10, 1 };
    l = 0;  ls = 1000;
    for ( n = 11111111; n < 1221111l; n++ )
    {   nro = n;
        for ( i = 0; i < 6; i++ )
        {   dig[i] = nro/div[i];
            nro %= div[i];   }
        i = 0;
        while ( i < 8 && dig[i] != 0 ) i++;
        if ( i == 8 )
        {
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
                            system ( "pause" );    }    }   }   } }
            }
    cout << "\nExisten " << l << " numeros entretenidos menores que " << ls << "\n";
    system ( "pause" );
}
