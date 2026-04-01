#include<iostream>
using namespace std;
main(){
       int *ptr, i, j;
       int mat[3][3];
       ptr = &mat[0][0];
       for(i=0;i<3; i++){ //cargamos la matriz
          for(j=0;j<3; j++){  
            	cout<<"mat["<<i<<"]["<<j<<"]:";
                cin>> *(ptr+i+j*3);                     
           }           
       }    
      for(i=0;i<3; i++){ //imprimimos la matriz
          for(j=0;j<3; j++){  
                cout<<"\t"<<*(ptr+i+j*3);                     
       }
       cout<<"\n";
      }  
       int vect[3];//inicializamos el vector
       for(i=0;i<3;i++){
            vect[i]=*(ptr+i);            
       }                 
       for(i=0;i<3; i++){//comparamos para obtener el menor valor
          for(j=0;j<3; j++){  
             if (*(ptr+i+j*3)<=vect[i]){
                  vect[i]=*(ptr+i+j*3);                     
             }                          
           }    
    }
    for(i=0;i<3;i++){//imprimimos los menores de cada fila
           cout<<"\t"<<vect[i];
    
    }            
 system("pause");
}
       
