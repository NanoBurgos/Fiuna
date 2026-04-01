//Ejercicio Taller 2015 #8
#include <iostream>
using namespace std;

int main()
{
    float n;
    
    do{
        cout << "Ingrese un numero entero y positivo: ";
        cin >> n;
    }while(n<=0 || n!=int(n));
    cout << endl << "Por la conjetura de Collatz: " << n;
    while(n!=1)
    {
        if(int(n)%2)
        {
            n=3*n+1;
            cout << ", " << n;
        }
        else
        {
            n/=2;
            cout << ", " << n;
        }            
    }
    cout << endl << "Presione una tecla para salir...";
    system("pause>nul");
}
