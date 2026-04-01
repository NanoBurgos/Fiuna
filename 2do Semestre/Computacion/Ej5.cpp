//Ejercicio Taller 2015 #5
#include <iostream>
using namespace std;

int main()
{
    int dias=0, error=0;
    float max, min;
    
    do{
        dias++;
        cout << "Introduzca la temp. max de hoy: ";
        cin >> max;
        if(max==9) error++;
        cout << "Introduzca la temp. min de hoy: ";
        cin >> min;
        if(min==9) error++;
        cout << endl;        
    }while(min && max);
    cout << "\nCantidad de dias: " << dias << endl 
         << "Cantidad de errores: " << error << endl 
         << "Porc. de errores: " << int((100*float(error))/(2*float(dias))) << "%" << endl;
    cout << "Presione una tecla para salir...";
    system("pause>nul");
}
