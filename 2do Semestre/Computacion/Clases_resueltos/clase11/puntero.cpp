#include<iostream>
using namespace std;
main(){
       int *ptr;
       int n=10;
       ptr = &n;
       cout<<"El valor de n es="<<n<<"\n";
       cout<<"La direccion de n ="<<&n<<"\n";
       cout<<"El valor de ptr es :"<<ptr<<"\n";
       cout<<"La direccion de ptr es :"<<&ptr<<"\n";
       cout<<"La desrreferencia de *ptr:"<<*ptr<<"\n";
       *ptr = 15;
       cout<<"El nuevo valor de n es"<<n<<"\n";
       system("pause");
}       
