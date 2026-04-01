#include<iostream>
#include<stdio.h>
using namespace std;
int producto(int, int);
main(){
     int a, b ,r=0;
     cout<<("Ingrese el primer numero entero y positivo: ");
     cin>>a;  
     cout<<("Ingrese el segundo numero entero y positivo: ");
     cin>>b; 
     r = producto(a,b); 
     cout<<"El producto es :"<<r;     
     system("pause");
} 
int producto(int a, int b){
    if (b==1){
       return a;       
    } else{
      return a + producto(a, b-1);     
    }                
    
}    
