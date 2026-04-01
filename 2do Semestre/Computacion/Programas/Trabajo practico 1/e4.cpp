#include<iostream>
using namespace std;
int main ()
{
 float a, b, c;
 
 cout << "\n\tIntrodusca 3 numeros enteros, positivos y en orden ascendente\n";
 
 cout << "\ta="; cin >> a;
 cout << "\tb="; cin >> b;
 cout << "\tc="; cin >> c;
 
 if (int(c)==c&&c>0&&c>b && int(b)==b&&b>0&&b>a && int(a)==a&&a>0)
 {
    if (c-b==b-a)
       cout << "\n\tlos numeros estan en P.A.\n";
    if (c/b==b/a && int (c/b) == (c/b)) // la razon debe ser un numero entero poreso int (c/b) == (c/b)
       cout << "\n\tlos numeros estan en P.G. \n"; //SOLUCIONAR:Razones decimales igual cumplen la condicion, cosa que no es correcto
}    
 else
     cout << "\t\nLos numeros introducidos no satisfacen las condiciones\n \n";
     
     system("pause");
     
     return 0;
     
}
 
