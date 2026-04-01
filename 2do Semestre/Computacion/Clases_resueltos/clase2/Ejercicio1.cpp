#include<iostream>
using namespace std;
int a, b;
int suma , multiplicacion, resta , division, residuo;
main(){
       cout <<"Ingrese el primer numero\n";
       cin>> a;
       cout <<"Ingrese el segundo numero\n";
       cin>> b;
       suma = a+b;
       multiplicacion = a*b;
       resta = a-b;
       division = a/b;
       residuo = a%b;
       cout <<"La suma es:";
       cout <<suma<<endl ;
       cout <<"La multiplicacion es:";
       cout <<multiplicacion<<endl;
       cout <<"La resta:";
       cout <<resta<<endl;
       cout <<"La division es:";
       cout <<division<<endl;
       cout <<"El residuo  es:";
       cout <<residuo<<endl;
       system("pause");
}
