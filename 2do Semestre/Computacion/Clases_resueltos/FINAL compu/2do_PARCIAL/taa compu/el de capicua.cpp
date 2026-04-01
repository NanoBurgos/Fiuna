/*  FILA A - TEMA 2. Elaborar un programa que:
    Lea un conjunto de números enteros mayor que 1000 y menor que
    10000. Verifique, para cada número leído, que cumple dichas
    condiciones y si no que lo lea nuevamente. Luego determine e
    imprima, si es o no capicúa (es decir, el número es el mismo
    si se lo lee de derecha a izquierda). El programa finaliza
    cuando se digita 0. */
#include <iostream>

using namespace std;

int main()
{float n,a,b,c,d;
cout<<"introducir el numero\n";
cin>>n;
while(n!=int(n) || n<1000 || n>10000)
{cout<<"el numero no es pedido\n";
cin>>n;}
a=int(n/1000);
b=int((n-a*1000)/100);
c=int((n-(a*1000+b*100))/10);
d=int(n-(a*1000+b*100+c*10));
if(a==d && b==c)
cout<<"el numero es capicua\n"<<d<<c<<b<<a;  
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
