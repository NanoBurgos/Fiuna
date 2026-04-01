//Ejercicio Taller 2015 #1
#include <iostream>
using namespace std;

int main()
{
    double fact;
    float n, s=1;

    do
    {
        cout << "Introduzca un valor entero n>=0: ";
        cin >> n;
    }while(n<0 || n!=int(n));

    for(int x=0; x<=n; x++)
    {
        fact=1;
        if(n!=0)
        {
             for(int i=x; i>=1; i--)
             {
                   fact=fact*i;
             }
        }
        s=s+(1/fact);
    }
    cout << "La sumatoria S=" << s;
    cout << endl << "Presione una tecla para salir...";
    system("pause>nul");
}
