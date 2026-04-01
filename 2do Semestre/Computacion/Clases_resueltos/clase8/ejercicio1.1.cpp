#include<iostream>
using namespace std;
int factorial(int);
main(){
       int a, r=0;
       cout<<("Ingrese el numero entero y positivo: ");
       cin>>a;
       r=factorial(a);
       cout<<"\nEl factorial es :"<<r; 
       system("pause");
} 

int factorial (int n){
   // int x;
    if (n==0){
        return 1;      
    }else {
        return n*factorial(n-1);   
    }      
    
}         
       
