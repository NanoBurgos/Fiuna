//Ejercicio Taller 2015 #7
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float hex, aux = -1;
    int i = 0, dim = 0;
    
    cout << "Introduzca un numero en base 10: ";
    cin >> hex;
    do{
        aux++;
    }while(pow(2,aux)<=hex);
    if(pow(2,aux)!=hex)     aux--;
    if(hex==0)              aux++;
    while(aux>=0)
    {
        if(hex >= pow(2,aux))
        {
            cout << "1";
            hex -= pow(2,aux);
        }
        else
        {
            cout << "0";
        }
        aux--;
    }
    cout << endl << "Presione una tecla para salir...";
    system("pause>nul");
}
