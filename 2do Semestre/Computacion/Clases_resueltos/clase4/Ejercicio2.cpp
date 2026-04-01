#include <iostream>
using namespace std;
main() {
   int dias ;
   int anhos=0, meses=0, semanas=0;
   cout<<"INGRESE EL NUMERO DE DIAS: ";
   cin>>dias;
   while(dias>=365){
     dias-= 365;
     anhos++;              
   }                
   while(dias>=30){
     dias-= 30;
     meses++;              
   } 
   while(dias>=7){
     dias-= 7;
     semanas++;              
   }    
  cout<<"\nLA CANTIDAD DE AÑOS ES:" <<anhos;  
  cout<<"\nLA CANTIDAD DE MESE ES:" <<meses;
  cout<<"\nLA CANTIDAD DE SEMANAS ES:" <<semanas;
  cout<<"\nLA CANTIDAD DE DIAS ES:" <<dias<<endl;  
 system("pause");   
 return 0;   
}       
