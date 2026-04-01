// Ver representacion de caracteres
#include<iostream>
using namespace std;
main()
{
  char c;
  int i, li, ls;
  cout << "\nDigite dos numeros enteros (li <= ls)  ";
  cin >> li >> ls;
  cout << "\n\t      0     1     2     3     4     5     6     7     8     9";
  cout << "\n\n\t" << li/10;
  for ( i = 0; i < li%10; i++ ) cout << "      ";
  if ( li <= ls )
  {  for ( i = li; i <= ls; i++ )
     {  c = i;
		  cout   << "     "  << c;
        if ( ( i + 1 )%10 == 0 ) cout << "\n\t" << i/10 + 1;
     }
  }
  else
     cout << "\n\tEl primer numero debe ser menor que el segundo";
  cout << "\n\n\t";
  system("pause");
}
