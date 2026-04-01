#include<iostream>
using namespace std;
main()
{
      float n,;
      int i; //i contador de veces hasta igualar con n, c contador de numeros que cumplen la condicion
      
      do
      {
            cout << "\t\nIntrdusca un numero entero y positivo n \n";
            cout << "\tn:"; cin >> n;
      }
      while (int(n) != n || n<0 );//hasta aqui algoritmo para validar el numero
      
      if (n==1)
      cout << "\n\tEl numero no es primo\n\n";
      else
      {
      for(i=2;i<=n;i++)
        {
        if (int(n)%i==0)
           {cout << "\n\tEl numero no es primo\n\n";break; }
        else
            {cout << "\n\tEl numero es primo\n\n";break;}  
        }
      }
      
      system ("pause");
      
      return 0;
      
}            
