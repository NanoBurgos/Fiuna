//Ejercicio Taller 2015 #9
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    double comb, factm, factn, factmn;
        
    cout << "Se calculara el numero de combinaciones de m elementos tomados de a n" << endl
         << "\tIngrese m: ";
    cin >> m;
    factm=1;
    if(m!=0)
    {
         for(int i=m; i>=1; i--)
         {
              factm=factm*i;
         }
    }
    
    cout << "\tIngrese n: ";
    cin >> n;
    factn=1;
    if(n!=0)
    {
         for(int i=n; i>=1; i--)
         {
              factn=factn*i;
         }
    }
    
    factmn=1;
    if(m-n)
    {
         for(int i=(m-n); i>=1; i--)
         {
              factmn=factmn*i;
         }
    }
    
    comb = factm/(factn*factmn);
    cout << "\nCombinaciones de m elementos tomados de a n: " << comb << endl;
    cout << "Presione una tecla para salir...";
    system("pause>nul");
}
