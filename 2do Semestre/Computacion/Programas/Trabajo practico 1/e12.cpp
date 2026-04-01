#include<iostream>
#include<cmath>
using namespace std;
main()
{
      float b ,a, p, sp;
      int i,; //i contador de veces hasta igualar con n, c contador de numeros que cumplen la condicion
      
      do
      {
            cout << "\t\nIntrdusca dos numeros enteros y positivos n \n";
            cout << "\ta:"; cin >> a;
            cout << "\tb:"; cin >> b;
            
      }
      while (int(a) != a || a<0 && int(b) != b || b<0);//hasta aqui algoritmo para validar el numero
      
      if ( a>2*b )
         cout << "\t\n Los datos no corresponden a los lados de un triangulo \n\n";
      else
      {
      p=2*b+a; sp=p/2;
      cout << "\n\tPerimetro: " << p;
      cout << "\n\tArea:" <<sqrt(sp*(sp-a)*(sp-b)*(sp-b)) ;
      }
      system ("pause");
      
      return 0;
      
}
      
