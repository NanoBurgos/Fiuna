#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
main(){
        int vec[11];
        int i;
        
        for(i=1;i<=10;i++){
           vec[i]=rand()%20 ;             
        }  
         cout<<"Elemnto"<<"\tValor\n" ;
       for(i=1;i<=10;i++){
         cout<<i<<"\t"<<vec[i]<<"\n";                
       }
       int sum=0; 
       for(i=2; i<=10; i+=2){
           sum+= vec[i];     
       }
       int mayor=vec[1];
       for(i=1; i<10; i+=2){
           if (mayor<vec[i]){
                mayor=vec[i];             
           }                    
       }
       cout<<"La suma de las posiciones pares es:"<<sum<<endl;  
       cout<<"El mayor de las posiciones impares es :"<<mayor<<endl;                       
       system("pause");
}       
