#include<iostream>
using namespace std;
int a, b;
main(){
     cout<<"Ingrese el primer numero : ";
     cin>>a>>b;
     cout<<"Ingrese el segundo numero : ";
     cin>>b;
     if (a%b==0){
     cout<<"ES MULTIPLO"<<endl ;          
     }
     if (a%b!=0){
     cout<<"NO ES MULTIPLO"<<endl;            
     }             
     system("pause");
} 
