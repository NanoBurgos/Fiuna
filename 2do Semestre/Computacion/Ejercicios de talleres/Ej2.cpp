//Ejercicio Taller 2015 #2
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double n, x, m, exp=1, fact;    
    
    do{
        cout << "Introduzca un valor entero n: ";
        cin >> n;        
    }while(n<0 || n!=int(n));
    
    do{
        cout << "Introduzca un valor entero x: ";
        cin >> x;       
    }while(x!=int(x));
    
    for(double j=1; j<=n; j++)
    {
        m=pow(x,j);
        fact=1;
        if(n!=0)
        {
             for(double i=j; i>=1; i--)
             {
                   fact=fact*i;
             }
        }
        exp=exp+(m/fact);
    }
    cout << endl << "e^x=" << exp << " para n=" << n << " y x=" << x << endl;
    cout << "Presione una tecla para salir...";
    system("pause>nul");
}
