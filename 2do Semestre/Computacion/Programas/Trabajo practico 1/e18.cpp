#include<iostream>
#include<cmath>

using namespace std;

int main ()
{
    
   float a, b, c, discriminante, x1, x2;
   
   cout << "\n\tIntrodusca 3 numeros:\n";
   cout << "\ta:\t"; cin >> a;
   cout << "\tb:\t"; cin >> b;
   cout << "\tc:\t"; cin >> c;
   
   discriminante = b*b-4*a*c;
   
   if ( discriminante < 0)
   {
   cout << "\t\nx1=\t" << (-b/(2*a)) << "+" << sqrt((-1)*discriminante)/(2*a) << "i\n" ;
   cout << "\t\nx2=\t" << (-b/(2*a)) << "-" << sqrt((-1)*discriminante)/(2*a) << "i\n\n"  ;    
   }
   else
   {
   cout << "\t\nx1=\t" << ((-b) + sqrt(discriminante))/(2*a) << "\n" ;
   cout << "\t\nx2=\t" << ((-b) - sqrt(discriminante))/(2*a) << "\n\n"  ;    
   } 
system ("pause");

return 0;    
    
}
