#include<iostream>
using namespace std;
int parimpar(int); // definimos el prototipo de funcion
main(){
      int a, n,d ;
      cout<<"Ingrese la cantidad enteros a ingresar: ";
      cin>>n; 
      int i = 1;
      while(i<=n){
        cout<<"Ingrese el numera a controlar" ;
        cin>>a;        
        d = parimpar(a);
        cout<<"retorna: "<<d<<"\n";
        i++;          
      }            
system("pause");  
} 

int parimpar(int a)   //desarrollamos la funcion
{
    int n ;
    if (a%2==0){
       return n = 1;
       } 
    else {
         return n= 0;
         }           
}   
