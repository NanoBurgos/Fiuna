/*  FILA D - TEMA 2. Elaborar un programa que:
    Lea un conjunto de números enteros y positivos. Verifique, para
    cada número leído, si cumple dichas condiciones y si no que lo
    lea nuevamente, luego determine e imprima si admite algún divisor
    primo mayor que 5 y menor que 20 que se repite por lo menos dos
    veces. El programa finaliza cuando se digita 0. */
#include<iostream>
using namespace std;
int main()
{   int nro, nroAux, p, ndp;        float fnro;
// fnro: variable auxliar de lectura.
// nro: el numero leido, para su verificacion.
// nroAux: variable auxiliar para divisiones sucesivas.
// p: divisor primo.
// ndp: numero de divisores primos del numero.
    cout << "\n\n\tDigite un numero entero y positivo ";
    cin >> fnro;
    while ( fnro )
    {   nro = (int)fnro;
        if ( fnro == nro && nro > 0 );
        {   nroAux = nro;           p = 2;            ndp = 0;
            while ( ndp < 2 && p <= nroAux )
            {   ndp = 0;
                while ( nroAux%p == 0 )
                {   nroAux /= p;    if ( p > 5 && p < 20 ) ndp++;   }
                p++;   }
            cout << "\n\n El numero " << nro;
            if ( ndp < 2 )
                cout << " no admite divisores primos repetidos";
            else
                cout << " admite divisores primos repetidos";
            cout << " mayor que 5 y menor que 20";  }
        cout << "\n\n\tDigite un numero entero y positivo ";
        cin >> fnro;   }
}
