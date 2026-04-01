#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
 int n, a;
 int c;// contador de datos insertados
 float total;// contador de numeros en el rango 25 a 50
 float promedio, suma;//suma se refiere al producto de los numeros en el intervalo 
 
 cout << "\t Introdusca un numero entero y positivo\n\t";
 cin >> n;
 cout << "\t introduzca " << n << " numeros enteros\n";
 
 c=1;
 total=0;
 suma=1;
 
 while (c <= n)
 {
       c = c + 1;
       cout << "\t" << c-1 << ":";
       cin >> a;
       
       if ( a>=25 && a<=50 )
       {
          cout << "\n\t" << a << " esta entre 25 y 50\n\n";
          total = total + 1;
          suma = suma * a;
       }
 }
 
 if (total != 0) 
 {
  promedio = pow (suma,(1/total));
  
  cout << "\n\tLa media de los numeros ingresados entre 25 y 50 es: " << promedio << "\n\n";
  }
 else
     cout << "\n\t Los numeros no se encuentran entre 25 y 50 \n\n";
  
  system ("pause");
  
  return 0;
  
}
       
          
