/*  FILA B - TEMA 2. Elaborar un programa que:
    Lea un conjunto de números enteros y positivos. Para cada número
    leído verifique si cumple dichas condiciones y si no que los lea
    nuevamente, luego determine e imprima si admite o no un divisor
    primo mayor que 41. El programa finaliza cuando se digita 0. */
#include<iostream>
using namespace std;
int main()
{   int nro, nroAux, p, ctl;        float fnro;
// fnro: variable auxiliar de lectura.
// nro: elemento del conjunto de numeros enteros y positivos.
    cout << "\n\n\tDigite un numero entero y positivo ";
    cin >> fnro;
    while ( fnro )
    {   nro = (int)fnro;
        if ( fnro == nro && nro > 0 );
        {   nroAux = nro;           p = 2;            ctl = 0;
            do {
                while ( nroAux%p == 0 )
                {   nroAux /= p;    if ( p > 41 ) ctl = 1;   }
                p++;
            }   while ( ctl == 0 && p <= nroAux );
            cout << "\n\n\tEl numero " << nro;
            if ( ctl )
                cout << " admite divisor primo mayor que 41";
            else
                cout << " no admite divisor primo mayor que 41";  }
        cout << "\n\n\tDigite un numero entero y positivo ";
        cin >> fnro;   }
}
