#include<iostream>
#include<cmath>
using namespace std;
main()
{
      double x,c;
      int n, i=1;
      
    cout << "\t\nIntrdusca un numero  n  \n";
    cout << "\tn:"; cin >> n;  
    
    do
    {
         i++;
         cout << i-1 << ")" << "introdusca un numero: " ; 
         cin >> x; cout << "\tsu cuadrado: " << x*x << "\tsu raiz cubica: ";
         c=pow (x,(double)1/3); cout << c << "\n\n";
    }
    while ( i <= int (n) );
    
    system ("pause");
    
    return 0;
    
}    
          
