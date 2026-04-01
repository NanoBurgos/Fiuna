#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void funcionrandtime(void);
main(){  
  funcionrandtime();
  system("pause");     
}
void funcionrandtime(void){  
   srand(time(NULL));  
   int i, r;
   for(i=0;i<10;i++){
      r= 100 + rand()% 100;        
      cout<<r<<"\t";               
   }                    
}
