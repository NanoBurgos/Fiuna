#include<iostream>
using namespace std;
void proceso(int *, int *,int, int);
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
      proceso(&matA[0][0], &matB[0][0], n, m);//llamamos al proceso;
      cout<<"\n";
      for(i=0;i<n;i++){
         for(j=0;j<m;j++){  
           cout<<"\t"<<matB[i][j];                
         }  
         cout<<"\n";                             
      }                                  
      system("pause");                                             
} 
void proceso (int *ptrA, int *ptrB, int n, int m){
     int i, j;
     for(i=0;i<n;i++){
         for(j=0;j<m;j++){ 
           if (i==j){
              *(ptrB+i+j*n)= *(ptrA+i+j*n);     
           }                         
           if(i!=j){
                if (*(ptrA+i+j*n)>0){
                     *(ptrB+i+j*n)= 1;  
              }if (*(ptrA+i+j*n)<0){
                    *(ptrB+i+j*n)= 0;                              
           }                            
         }
       }
      } 
  }
