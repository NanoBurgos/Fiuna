#include<iostream>
using namespace std;
main()
{
      float n ,a;
      int i, mayor, menor;
      
      do
      {
            cout << "\t\nIntrdusca un numero entero y positivo n \n";
            cout << "\tn:"; cin >> n;
      }
      while (int(n) != n || n<0 );//hasta aqui algoritmo para validar el numero
      
      cout <<"\tIntrodusca " << n << " numeros enteros y positivos\n\n";
      
      for (i=1 ; i <= int(n) ; i++)//entrada de n datos 
      {
      do
        {
       cout << i << ") "; cin >> a;//titulo y entrada de datos
       }
      while (int(a) !=a || a<0);//algoritmo de validacion de a
      if (i==1)
      {
      mayor=int(a);//como los numeros a ingresar deben ser positivos, siempre seran mayores a 0
      menor=int(a);
      }
      else
      {
      if (a>mayor)
         mayor=int(a);
      if(a<menor)
         menor=int(a);
         }
      }
     cout << "\t\nEl menor es: " << menor << "\n\n";
     cout << "\t\nEl mayor es: " << mayor << "\n\n";
     
      system ("pause");
      
      return 0;
      
}
