/* Vect01: Escribir un programa en lenguaje C que: Resuelva el problema del cajero
  (Dar el vuelto con el menor número posible de billetes) */
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;
 
int main()
{
    int v, s, i, n, m, c, nbil[12];
    int dbil[12] = {100000, 50000, 20000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1};
    cout<<"\n\t\tDigite el monto de dinero de la compra: ";
    cin>>m;
    cout<<"\n\t\tDigite el monto del valor de la compra: ";
    cin>>c;
    v=m-c;
    cout<<"\n\t\tEl vuelto es: "<<v;
    while ( v != 0 )
    {
        s = v;
        n = 0;
        while ( s != 0 )
        {
            nbil[n] = s/dbil[n];
            s -= nbil[n]*dbil[n];
            n++;
        }
        cout<<"\n\t\t\t\tDebe entregar como vuelto de G: ";
        for (i = 0; i < n; i++ )
        {
            if ( nbil[i] != 0 )
            {
                cout<<"\n\t\t\t\t\t\t"<<nbil[i]<<" billetes de "<<dbil[i];
            }
        }
        cout<<"\n\n\t\t\t\t\tDigite el monto del vuelto a dar: ";
        cin>>v;
    }
    cout<<"\n\n";
    system("pause");
}
 
