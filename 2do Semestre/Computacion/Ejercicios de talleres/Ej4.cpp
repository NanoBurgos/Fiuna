//Ejercicio Taller 2015 #4
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float n, aux;
    int d=0, n1;
    
    do{
        cout << "Ingrese un nro entero: ";
        cin >> n;
    }while(n!=int(n));
    aux=n;
    while(int(aux)) 
    { 
        aux/=10; 
        d++; 
    }
    if(n<0)
    {
        cout << "-\t";
        n*=-1;
    }
    for(int i=d; i>0; i--)
    {
        n1=int(n/pow(10,i-1));
        n-=n1*pow(10,i-1);
        cout << n1 << "\t";
    }
    cout << endl << "Presione una tecla para salir...";
    system("pause>nul");
}
