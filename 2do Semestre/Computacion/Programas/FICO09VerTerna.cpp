/*
   Programa que lee ternas de numeros enterosy los imprime con un
   mensaje:
   i)   Los numeros estan en progresion aritmetic;
   ii)  Los numeros estan en progresion geometrica;
   iii) Los numeros no estan en progresion aritmetica ni geometrica.
*/
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "\tDigite el primer numero : ";
    cin >> a;
    while ( a != 0 )
    {
        cout << "\n\tDigite el segundo numero: ";
        cin >> b;
        cout << "\n\tDigite el tercer numero : ";
        cin >> c;
        if ( b - a == c - b )
        {
           cout << "\nLos numeros estan en progresion aritmetica\n";
        }
        else
        {
            if ( b*b == a*c )
            {
               cout << "\nLos numeros estan en progresion geometrica\n";
            }
            else
            {
                cout << "\nLos numeros no estan en progresion aritmetica ni geometrica\n";
            }
        }
        system ( "pause" );
        cout << "\tDigite el primer numero : ";
        cin >> a;
    }
}
