/*  FILA G - TEMA 2. Elaborar un programa que:
    Lea un conjunto de números enteros y positivos. Verifique, para
    cada número leído, si cumple dichas condiciones y sino que lo
    lea nuevamente, luego determine e imprima si admite o no algún
    divisor primo repetido. El programa finaliza cuando se digita 0. */
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
                {   nroAux /= p;    ndp++;   }
                p++;   }
            cout << "\n\n\tEl numero " << nro;
            if ( ndp < 2 )
                cout << " no admite divisores primos repetidos";
            else
                cout << " admite divisores primos repetidos";  }
        cout << "\n\n\tDigite un numero entero y positivo ";
        cin >> fnro;   }
}
