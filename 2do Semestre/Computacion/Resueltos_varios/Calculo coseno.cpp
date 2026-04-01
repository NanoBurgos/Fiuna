/*
   Calculo de cos(x) utilizando la serie de potencias
   cos(x) = SUMA(i=0;i=n) [(-1)^i*x^(2*i)/(2*i)!];
*/
#include<iostream.h>
#include<math.h>
int main()
{
   int k, g;
   float f, s, xg, x, e, n, pi;
   pi = 4*atan(1.);
   e = 0.00001;
   cout << "Digite el arco en grados sexagesimales ";
   cin >> xg;
   x = xg/180*pi;
   s = 1;
   n = 2;
   k = 2;
   g = 1;
   f = pow(x, k)/n;
   while ( fabs(f) >= e )
   {
      g = -g;
      f = pow(x, k)/n;
      s += g*f;
      k += 2;
      n = n*(k-1)*k;
   }
   cout << "\ncos( " << xg << ") = " << s;
   cout << "\nValor correcto " << cos(x) << "\n";
   system("pause");
   return 0;
}
