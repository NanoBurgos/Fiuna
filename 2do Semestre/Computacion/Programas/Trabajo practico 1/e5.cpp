#include <iostream>

using namespace std;
int main ()
{
    float n;
    float factorial; //factorial del numero
    int c; //contador 
    
    factorial = 1;
    c = 1;
    
    cout << "\n\t Introdusca un numero menor que 100 entero y positivo\n\n\t";
    cin >> n;
    
    if ( n>0 && n<100 && int(n)==n )
    {
        
         if (int(n) % 2 == 0)
            cout << "\n\t-El numero es par.";
         if (int(n) % 5 == 0)
            cout << "\n\t-El numero es multiplo de 5.";
            
  while ( c <= int(n) )
         {
             factorial = factorial * c;
              c = c + 1;
         }
         
         cout << "\n \tSu factorial es: " << factorial;
         cout << "\n\n";
      }
      else
          cout << "\t\nEl numero no cumple las condiciones.\n\n";   
        
system ("pause");

return 0;

}
