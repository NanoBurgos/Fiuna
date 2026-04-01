//Ejercicio Taller 2015 #10
#include <iostream>
using namespace std;

int main()
{
    float n;
    int cont=0, aux;

    do
    {
        cout << "Introduzca un valor entero n>0: ";
        cin >> n;
    }while(n<=0 || n!=int(n));
    aux=int(n);
    cout << "Los divisores de " << n << " son: 1";
    for(int i=2; i<=aux; i++)
    {
        while(aux%i==0)
        {
             aux/=i;
             cont++;
        }
        switch(cont)
        {
             case 0:   break;
             case 1:   cout << "*" << i; break;
             default:  cout << "*" << i << "^" << cont;
        }
        cont=0;
    }
    cout << endl << "Presione una tecla para salir...";
    system("pause>nul");
}
