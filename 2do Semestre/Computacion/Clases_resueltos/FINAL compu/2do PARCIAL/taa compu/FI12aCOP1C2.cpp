/*  FILA A - TEMA 2. Elaborar un programa que:
    Lea un conjunto de números enteros y positivos comprendidos entre
    10000 y 100000. Verifique que cada número leído cumple dichas
    condiciones y si no que lo lea nuevamente, luego determine e
    imprima la suma de sus cifras significativas. El programa finaliza
    cuando se digita 0. */
#include<iostream>
using namespace std;
int main()
{   int nro, sumCif, nroAux, d;
    float fnro;
    cout << "\n\n\tDigite un numero entero > 10000 y < 100000: ";
    cin >> fnro;
    while ( fnro )
    {   nro = (int)fnro;
        if ( fnro != nro || nro <= 10000 || nro >= 100000 )
            cout << "\n\n\tNumero invalido, digite nuevamente ";
        else
        {   nroAux = nro;     d = nroAux/10000;   sumCif = d;
            nroAux %= 10000;  d = nroAux/1000;    sumCif += d;
            nroAux %= 1000;   d = nroAux/100;     sumCif += d;
            nroAux %= 100;    d = nroAux/10;      sumCif += d;
            nroAux %= 10;     d = nroAux;         sumCif += d;
            cout << "\n\n\tLa suma de las cifras del numero " << nro;
            cout << " es " << sumCif;  }
        cout << "\n\n\tDigite un numero entero > 1000 y < 10000: ";
        cin >> fnro;  }
}
