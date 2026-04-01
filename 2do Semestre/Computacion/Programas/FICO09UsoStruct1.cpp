//  Uso de estructuras REGISTRO DE EMPLEADOS
#include<iostream>
using namespace std;
int main()
{  int i, n;
   do {
      cout << "\n\t\tDigite el numero de empleados ";
      cin >> n;
   }  while( n < 2 );
   struct varEst       // Declaracion de la estructura
   {  long int DocId;
      char nom[30];
      double salario;   };
   struct varEst empl[10];
   for ( i = 0; i < n; i++ )
   {  cout << "\tDigite DocId[" << i << "]: ";
      cin >> empl[i].DocId;
      cout << "\tDigite Nombre[" << i << "]: ";
      cin >> empl[i].nom;
      cout << "\tDigite Salario[" << i << "]: ";
      cin >> empl[i].salario;   }
// Impresion de empl
   cout << "\n\nDocumento   Nombre y Apellido    Salario";
   for ( i = 0; i < n; i++ )
   {  cout << "\n" << empl[i].DocId;
      cout << ", " << empl[i].nom;
      cout << ", " << empl[i].salario;   }
   cout << " }\n\n";
   system ( "pause" );
}
