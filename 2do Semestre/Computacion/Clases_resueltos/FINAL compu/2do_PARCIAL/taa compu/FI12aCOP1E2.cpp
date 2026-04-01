/*  FILA E - TEMA 2. Elaborar un programa que:
    Lea un número entero y positivo a, luego un conjunto de números,
    también enteros y positivos. Verifique para cada número leído si
    cumplen dichas condiciones y si no que lo lea nuevamente, luego
    determine e imprima, para cada número del conjunto, si es o no
    primo con a. El programa finaliza cuando se digita 0. */
#include<iostream>
using namespace std;
int mcd( int a, int b );
int main()
{   int a, nro;     float fnro;
// a: primer numero leido.
// nro: elemento del conjunto de numeros enteros y positivos.
// fnro: variable auxiliar, de lectura.
    do  {
        cout << "\n\n\tDigite un numero entero y positivo ";
        cin >> fnro;        a = (int)fnro;
    }   while ( fnro != a && a <= 0 );
    cout << "\n\n\tDigite un numero entero y positivo del conjunto ";
    cin >> fnro;
    while ( fnro )    
    {   nro = (int)fnro;
        if ( fnro == nro && nro > 0 )
        {   cout << "\n\n\tEl numero " << nro;
            if ( mcd( a, nro ) == 1 )
                cout << " es primo con ";
            else
                cout << " no es primo con ";
            cout << a;  }
        cout << "\n\n\tDigite un numero entero y positivo ";
        cin >> fnro;   }
}
int mcd( int a, int b )
{   int p, q, r;
// p, q, r: variables auxiliares para obtener el mcd de a y b.
    if ( a > b )
    {  p = a;  q = b;  }
    else
    {  p = b;  q = a;  }
    r = p%q;
    while ( r )
    {  p = q;       q = r;     r = p%q;  }
    return q;
}
