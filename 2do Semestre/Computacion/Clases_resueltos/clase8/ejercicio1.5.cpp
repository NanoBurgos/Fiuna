#include<iostream>
using namespace std;
int par(int);
int impar(int);
main(){
       int a, n;
       cout<<"Ingrese el numero: ";
       cin>>a;
       if( (n=par(a))==1){
           cout<<"Es un numero par";
       }
       else {
        cout<<"Es un numero impar";
        }       
       
       system("pause");
}   

int par(int n){
    if (n==0){
        return 1;      
    } else{
        return impar(n-1);   
    }            
} 
int impar(int n){
    if (n==0){
        return 0;      
    } else{
        return par(n-1);   
    }            
}        
