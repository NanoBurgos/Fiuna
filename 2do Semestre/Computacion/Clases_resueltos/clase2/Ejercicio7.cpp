#include<iostream>
using namespace std;
main (){
     int a, b;
     cout<<"Ingrese el numero a:";
     cin>>a;
     cout<<"ingrese el numero b:";
     cin>>b;
     a = a-b;
     b = a+b;
     a = b-a;
     
     cout<<"El numero a intercambiado es:";
     cout<<a<<endl;
     cout<<"El numero b intercambiado es:";
     cout<<b<<endl; 
     system("pause"); 
}      
