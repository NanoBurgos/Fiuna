/*
   Determinar los numeros primos gemelos menores que un
   numero dado(dos numeros primos son gemelos si su
   diferencia es dos)
*/
#include<iostream>
using namespace std;
int main()
{
   int p, d, ls, nl;
   do {
      cout << "Digite un numero entero mayor que dos ";
      cin >> ls;
      p = 1;
      nl = 0;
      while ( p + 2 < ls )  {
         p ++;
         d = 2;
         while ( d < p && p%d != 0 ) d++;
         if ( d == p )
         {
            p += 2;
            d = 2;
            while ( d < p && p%d != 0 ) d++;
            if ( d == p )
            {
               cout << p - 2 << " y " << p << " son primos gemelos\n";
               nl++;
               if ( nl == 20 )
               {
                  system("pause");
                  nl = 0;
               }
            }
            p -= 2;
         }
      }
   }while ( ls > 2 );
   system ( "pause" );
   return 0;
}
