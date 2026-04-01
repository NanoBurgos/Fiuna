#include<iostream>
using namespace std;
main(){
       int vec[10];
       int i, pos=0, neg=0, cero=0;
       cout<<"Ingrese los elementos del vector\n";
       for(i=0;i<10;i++){
         cout<<"vec["<<i<<"]: " ; 
          cin>>vec[i];       
       }              
       for(i=0;i<10;i++){
          if(vec[i]>0)
          pos++;
          if(vec[i]<0)
          neg++; 
          if(vec[i]==0)
          cero++;              
       }
       cout<<"Total de positivos:" <<pos<<endl;  
       cout<<"Total de negativos:" <<neg<<endl; 
       cout<<"Total de ceros:"<<cero<<endl;                  
       system("pause");
}       
