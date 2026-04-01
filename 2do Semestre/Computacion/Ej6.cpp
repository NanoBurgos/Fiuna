//Ejercicio Taller 2015 #6
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double n, n2; 
    int d=0, aux, min, max, suma=0;
    
    cout << "Ingrese un numero: ";
    cin >> n;
    n2=n;
    while(int(n2)) 
    { 
        n2/=10; 
        d++; 
    }
    for(int i=d; i>0; i--)
    {
        if(i==d)
        {
            aux = int(n/pow(10,i-1));
            n = n-aux*pow(10,i-1);
            max = aux;
            min = aux;
            suma = suma+aux;
        }
        else
        {
            aux = int(n/pow(10,i-1));
            n = n-aux*pow(10,i-1);
            suma = suma+aux;
            if(aux<min)
            {   min=aux;   }
            if(aux>max)
            {   max=aux;   }
        }
    }
    cout << "\nEl mayor digito es " << max << endl 
         << "El menor digito es " << min << endl
         << "La suma de los digitos es " << suma <<endl;
    cout << "Presione una tecla para salir...";
    system("pause>nul");
}
