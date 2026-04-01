#include<iostream>
using namespace std;
main(){
       int n, m, i, j;
      cout<<"Ingrese el primer valor N de la matriz: ";
      cin>>n;
      cout<<"Ingrese el segundo valor M de la matriz: ";
      cin>>m;
      int matA[n][m];
      int matB[n][m];
      for(i=0;i<n;i++){
         for(j=0;j<m;j++){
          cout<<"matA["<<i<<"]["<<j<<"]:";
          cin>>matA[i][j];               
         }                               
      }  
      for(i=0;i<n;i++){
         for(j=0;j<m;j++){  
           cout<<"\t"<<matA[i][j];                
         }  
         cout<<"\n";                             
      }
      cout<<"------------------------";
     for(i=0;i<n;i++){
         for(j=0;j<m;j++){ 
           if (i==j){
              matB[i][j]= matA[i][j];     
           }                         
           if(i!=j){
                if (matA[i][j]>0){
                     matB[i][j]= 1;  
              }if (matA[i][j]<0){
                    matB[i][j]= 0;                              
           }                            
         }
       }
      }   
      cout<<"\n";
      for(i=0;i<n;i++){
         for(j=0;j<m;j++){  
           cout<<"\t"<<matB[i][j];                
         }  
         cout<<"\n";                             
      }                                  
      system("pause");                                             
} 
