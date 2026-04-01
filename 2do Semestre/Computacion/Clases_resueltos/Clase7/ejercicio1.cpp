#include<iostream>
using namespace std;
main(){
   float s=0.0;
   float i; 
   float suma =0.0;   
   for (i=1;i<=10; i++){  //utilizando repeticion for 
   s=(1+i)/(3*i + 2) ;
   suma= suma +s;
   cout<<s<<"\n";   
   }
   cout<<"la suma: "<<suma;        
   suma=0.0;
   i=1.0;
   s=0.0;
   while(i<=10){  //utilizando repeticion while
    s=(1+i)/(3*i + 2) ;
   suma= suma +s;
   cout<<s<<"\n";
   i++;            
   }
   cout<<"la suma: "<<suma<<"\n";
   suma=0.0;
   i=1.0;
   s=0.0;
   do {
   s=(1+i)/(3*i + 2) ;
   suma= suma +s;
    i++;
    cout<<s<<"\n";
    }    
   while(i<=10);// dutilizando do while
  
   cout<<"la suma: "<<suma<<"\n";  
   system("pause");             
}        
