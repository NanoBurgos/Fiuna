#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
 int a, xi2;
 int c;// contador de datos insertados
 float total;// contador de numeros
 float n, promedio, suma, s;//suma se refiere a la suma de los numeros en el intervalo 

 cout << "\t Introdusca un numero entero y positivo\n\t";
 cin >> n; 
 while (int(n)!=n || n<0)//se repetira la solicitud de entrada del numero hasta que sea entero y fraccionario
    {
    cout << "\t\n El numero no cumple la condicion. \n\n";
    cout << "\t Introdusca un numero entero y positivo\n\t";
    cin >> n;
    }
 cout << "\t introduzca " << n << " numeros enteros\n";
 
 c=1;
 total=0;
 suma=0;
 xi2=0;
 
 while (c <= n)
 {
       c = c + 1;
       cout << "\t" << c-1 << ":";
       cin >> a;
       
       total = total + 1;
       suma = suma + a;
       xi2 = xi2 + (a*a);
       
 }
 
  promedio = suma / total;
  cout << "\n\tEl promedio de los numeros ingresados es: " << promedio << "\n";
  s = sqrt(xi2+promedio);
  cout << "\n\tLa desviacion tipica S= " << s << "\n\n";
 
  
  system ("pause");
  
  return 0;
  
}
