// Uso de switch
#include<iostream>
using namespace std;
main()
{
    int n;
    cout << "\n\n\t\tMenu Principal";
    cout << "\n\n\t1. Realizar la tarea uno";
    cout << "\n\t2. Realizar la tarea dos";
    cout << "\n\t3. Realizar la tarea tres";
    cout << "\n\n\t0. Salir del sistema";
    cout << "\n\n\t\tDigite un numero entero ";
    cin >> n;
    switch(n)
    {
          case  1:    cout << "\nDebo realizar la tarea uno";   break;
          case  2:    cout << "\nDebo realizar la tarea dos";   break;
          case  3:    cout << "\nDebo realizar la tarea tres";  break;
          case  0:    cout << "\nMe retiro a descanzar";        break;
          default:    cout << "\nNo es una opcion valida";
    }                
    cout << "\n\n\t";
    system("pause");
}
