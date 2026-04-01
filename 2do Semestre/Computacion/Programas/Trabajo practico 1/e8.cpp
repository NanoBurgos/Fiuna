#include<iostream>
#include<math.h>
using namespace std;
main()
{
      float n ,x, s=0;
      int i;
      
      do
      {
            cout << "\t\nIntrdusca un numero entero y positivo n y un numero x \n";
            cout << "\tn:"; cin >> n;
      }
      while (int(n) != n || n<0 );
      
      cout << "\n\tx:"; cin >> x;
      
      for ( i=0 ; i <= int (n) ; i++ )
      
         {s += (((x*i+1) / (2*i+1)) * (pow((-1),i)) );}
         
      cout << "\t\n El valor de S es : " << s << "\n\n";
      
      system ("pause");
      
      return 0;
      
}
      
      
      
