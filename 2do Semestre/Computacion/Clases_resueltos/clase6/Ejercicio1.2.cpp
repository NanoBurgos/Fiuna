#include<iostream>
#include<stdlib.h>
using namespace std;
void funcionrandsemilla(int);
main(){
  int a;     
  cout<<"Ingrese la semilla";
  cin>>a;     
  funcionrandsemilla(a);
  system("pause");     
}
void funcionrandsemilla(int a){  
   srand(a);  
   int i, r;
   for(i=0;i<10;i++){
      r= 100 + rand()% 100;        
      cout<<r<<"\t";               
   }                    
}
