#include<iostream>
#include<stdlib.h>
using namespace std;
void funcionrand(void);
main(){
  funcionrand();
  system("pause");     
}
void funcionrand(void){  
   int i, r;
   for(i=0;i<10;i++){
      r= 100 + rand()% 100;        
      cout<<r<<"\t";               
   }                    
}         
    
