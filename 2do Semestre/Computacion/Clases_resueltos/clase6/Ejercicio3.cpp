#include<iostream>
using namespace std;
void perfect(int);
main(){
         int x;
         cout<<"Ingrese el valor de x: ";
         cin>> x;
         perfect(x);
         system("pause");     
} 
void perfect(int a){
     
     int i, s=0;
     for(i=1; i<a; i++){
         if(a%i==0){
           s=s+i;         
         }                
     }
     if (s==a){
      cout<<"ES NUMERO PERFECTO\n";         
     }else{
      cout<<"NO NUMERO PERFECTO\n";       
     }                       
}     
