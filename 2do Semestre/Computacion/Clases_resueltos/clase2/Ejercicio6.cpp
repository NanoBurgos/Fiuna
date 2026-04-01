#include <iostream>
using namespace std;

main(){
       int a, b, AUX;
       cout<<"Ingrese el numero a:";
       cin>>a;
       cout<<"ingrese el numero b:";
       cin>>b;
       AUX =a;
       a= b;
       b = AUX;
       cout<<"El numero a es:";
       cout<<a<<endl;
       cout<<"El numero b es:";
       cout<<b<<endl;
       system("pause");
}       
