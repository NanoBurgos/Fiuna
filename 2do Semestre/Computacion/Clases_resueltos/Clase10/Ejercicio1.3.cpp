#include<iostream>
using namespace std;
main(){
      int n, m, i,j;
      cout<<"ingrese la cantidad de filas:";
      cin>>n; 
      cout<<"ingrese la cantidad de columnas:";
      cin>>m; 
      int matriz[n][m], vect[n];;
     // leemos la matriz   
       for(i=0;i<n;i++){
		 for(j=0;j<m;j++){
          cout<<"mat["<<i<<"]["<<j<<"]:";
          cin>>matriz[i][j];cout<<"\n";                    
        } 
      } 
      for(i=0;i<n;i++){
          vect[i]=0;             
      }                  
     //imprimimos la matriz               
     for(i=0;i<n;i++)
	 {
		for(j=0;j<m;j++)
			cout<<"\t"<<matriz[i][j];
		cout<<"\n";
	 } 
	 //sumamos los datos en la posicion del vector;
     for(i=0;i<n;i++){          
	    for (j=0;j<m;j++){
            vect[i]+= matriz[i][j];
        }
     } 
     for(i=0;i<n;i++){
        cout<<"\t"<<vect[i];              
     }                
 system("pause");	
} 
