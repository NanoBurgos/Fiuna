#include<iostream>
#include<math.h>
using namespace std;
main()
{
      float n ,a, s=0, p;
      int i,c=0; //i contador de veces hasta igualar con n, c contador de numeros que cumplen la condicion
      
      do
      {
            cout << "\t\nIntrdusca un numero entero y positivo n \n";
            cout << "\tn:"; cin >> n;
      }
      while (int(n) != n || n<0 );//hasta aqui algoritmo para validar el numero
      
      cout <<"\tIntrodusca " << n << " numeros\n\n";
      
      for (i=1 ; i <= int(n) ; i++)//entrada de n datos 
      {
       cout << i << ") "; cin >> a;//titulo y entrada de datos
      if ( int (a)==a && int(a)%2520==0 && int(a)%840==0 )//condicion de contar y sumar los numeros divisibles por 2520 y 840
         {
               c+=1;
               cout << "\t\n El numero es divisor de 2520 y 840\n";
               s+= a;
         }
      }
      if (c!=0)//condicion para evitar 0/0
         {
         cout << "\n\tEl promedio de numeros entre 2520 y 840 es :";
         p=s/c;
         cout << p << "\n\n";
         }

      system ("pause");
      
      return 0;
      
}
      
 
