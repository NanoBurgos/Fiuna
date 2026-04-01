/* Ejercicio 25 TALLER */

#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float n,t[int(n)], q=0;
    int i;
    
    cout << "\n\n\tIntroduzca el numero de elementos, debe ser entero positivo\n\t"; cin>>n;
    while (n<=0 || int(n)!=n)
    {
          cout << "\n\n\tVuelva a introducir N, debe ser entero positivo\n\t"; cin>>n;
          }
        for (i=0; i<n; i++)
        {       
        cout << "\n\n\tIntroducir el elemento\n\t"; cin>>t[i];
        while (t[i]==0 || int(t[i])!=t[i])
       {  cout << "\n\n\tVuelva a introducir el elemento, debe ser entero\n\t"; cin>>t[i];
       }
         }

         for (i=0; i<n; i++)
         {q=q+pow(t[i],2);
         }
         cout << "\n\n\tEl numero de elementos es "<<n<<"\n\t";
         cout << "\n\n\tLa suma de los cuadrados es "<<q<<"\n\t";
         system ("PAUSE");
         return 0;
         } 
  
