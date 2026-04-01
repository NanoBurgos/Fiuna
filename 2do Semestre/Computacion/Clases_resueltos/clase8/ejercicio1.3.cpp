#include<iostream>
using namespace std;
int power(int, int);
main(){
     int a, b ,r=0;
     cout<<("Ingrese la base entero y positivo: ");
     cin>>a;  
     cout<<("Ingrese el exponente entero y positivo: ");
     cin>>b; 
     r = power(a,b); 
     cout<<"El power es :"<<r;     
     system("pause");;
} 

int power(int a , int b){
    if(b==1){
       return a;
    }else {
       return a*power(a, b-1);   
    }      
      
}    
