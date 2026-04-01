//Ejercicio Taller 2015 #3
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float n;
    int d=0, n1, n2;
    
    do{
        cout << "Ingrese un nro entero con una cantidad par de digitos: ";
        cin >> n;
        while(int(n)) 
        { 
          n/=10; 
          d++; 
        } 
    }while(d%2!=0 || n!=int(n) || n==0);
    
    if(n<0)
    {
        cout << "-";
        n*=-1;
    }
    for(int i=d; i>0; i--)
    {
        n1=int(n/pow(10,i-1));
        n-=n1*pow(10,i-1);
        i--;
        n2=int(n/pow(10,i-1));
        n-=n2*pow(10,i-1);
        cout << n2 << n1;
    }
    cout << endl << "Presione una tecla para salir...";
    system("pause>nul");
}
