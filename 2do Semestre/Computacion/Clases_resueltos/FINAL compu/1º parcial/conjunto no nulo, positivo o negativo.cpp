/* Ejercicio 24 TALLER */

#include <iostream>
using namespace std;
int main ()
{
    int i, c=0, d=0;
    float n, t[int(n)];
    cout << "\n\n\tIntroducir el numero de elementos del conjunto\n\t"; cin>>n;
    while (n<=0 || int(n)!=n)
    {
          cout << "\n\n\tVuelva a introducir N, debe ser entero positivo\n\t"; cin>>n;
    }
    for (i=0; i<n; i++)
    {
        cout << "\n\n\tIntroducir los elementos\n\t"; cin>>t[i];
        while (t[i]==0 || int(t[i])!=t[i])
    {
          cout << "\n\n\tVuelva a introducir el elemento, debe ser entero positivo\n\t"; cin>>t[i];
    }}
   { for (i=0; i<n; i++)
    {    if (t[i]<0)
        c++;
        else
        d++;
        }}
   
cout << "\n\n\tEl numero de elementos es "<<n<<" tiene "<<d<<" numeros positivos y "<<c<<" numeros negativos\n\t";
system ("PAUSE");
return 0;
}
