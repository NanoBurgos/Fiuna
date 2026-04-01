#include<iostream>
#include<cmath>

using namespace std;

int main ()
{
    float l, areabase, arealateral, areatotal;
    
    cout << "\n\tIntrodusca un numero:\t"; cin >> l;
    
    areabase = l*l;
    arealateral = l*l*sqrt(3);
    areatotal= areabase + arealateral;
    
    cout << "\n\tEl area total de la piramide de lado " << l << " es:\t" << areatotal << "\n\n"; 
    
system ("pause");

return 0;    
    
}
