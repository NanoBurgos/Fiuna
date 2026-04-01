// Uso de ?
#include<iostream>
using namespace std;
main()
{
   int n;
   float x;
   cout << "Digite un numero entero ";
   cin >> n;
   x = n > 0 ? 1 : 2;
   if ( x == 1 ) 	cout << "\n\nEl valor dado de n es positivo";
  	else 	cout << "\n\nEl valor dado de n es negativo o nulo";
   cout << "\n\n";
// Observe lo que sigue   
   x = n > 0;
   if ( x )	cout << "\n\nEl valor dado de n es positivo";
  	else 	cout << "\n\nEl valor dado de n es negativo o nulo";
   cout << "\n\n";
   system("pause");
}
