#include<iostream>
#include<cmath>

using namespace std;

int main ()
{
    
   float a, b, c, H;
   
   cout << "\n\tIntrodusca 3 numeros:\n";
   cout << "\ta:\t"; cin >> a;
   cout << "\tb:\t"; cin >> b;
   cout << "\tc:\t"; cin >> c;
   
   if ( c >=0 )
      { H= a*a*a+b*b*b;
       if(H>=0){cout << "H=" << sqrt(H) << "\n\n";}}
   
   if ( c < 0 &&  a < b )
      {cout << "\n\tH=" << abs((3*b-7*a)/c) << "\n\n";}
      
   if ( c < 0 && a>b )
      {cout << "\n\tLos 3 numeros son:\t" << a << "\t" << b << "\t" << c << "\n\n";}
   
   
system ("pause");

return 0;    
    
}
