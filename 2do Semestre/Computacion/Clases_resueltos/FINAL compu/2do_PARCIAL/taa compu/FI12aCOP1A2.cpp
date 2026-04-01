/*  FILA A - TEMA 2. Elaborar un programa que:
    Lea un conjunto de números enteros mayor que 1000 y menor que
    10000. Verifique, para cada número leído, que cumple dichas
    condiciones y si no que lo lea nuevamente. Luego determine e
    imprima, si es o no capicúa (es decir, el número es el mismo
    si se lo lee de derecha a izquierda). El programa finaliza
    cuando se digita 0. */
#include<iostream>
using namespace std;
int main()
{   int nro, nroInv, nroAux, d;
    float fnro;
    cout << "\n\n\tDigite un numero entero > 1000 y < 10000: ";
    cin >> fnro;
    while ( fnro )
    {   nro = (int)fnro;
        if ( fnro != nro || nro <= 1000 || nro >= 10000 )
            cout << "\n\n\tNumero invalido, digite nuevamente ";
        else
        {   nroAux = nro;     d = nroAux/1000;   nroInv = d;
            nroAux %= 1000;   d = nroAux/100;    nroInv += d*10;
            nroAux %= 100;    d = nroAux/10;
            nroInv += d*100 + (nroAux%10)*1000;
            if ( nro == nroInv )
               cout << "\n\n\tEl numero " << nro << " es capicua";
            else
               cout << "\n\n\tEl numero " << nro << " no es capicua";
        }
        cout << "\n\n\tDigite un numero entero > 1000 y < 10000: ";
        cin >> fnro;  }
}
