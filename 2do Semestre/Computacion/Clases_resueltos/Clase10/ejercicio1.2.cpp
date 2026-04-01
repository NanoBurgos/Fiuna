#include<iostream>
using namespace std;
main(){
      int n, m, i,j;
      cout<<"ingrese la cantidad de filas:";
      cin>>n; 
      cout<<"ingrese la cantidad de columnas:";
      cin>>m; 
      int matriz[n][m];
     // leemos la matriz   
       for(i=0;i<n;i++){
		 for(j=0;j<m;j++){
          cout<<"mat["<<i<<"]["<<j<<"]:";
          cin>>matriz[i][j];cout<<"\n";                    
        } 
      }   
     //imprimimos la matriz               
     for(i=0;i<n;i++)
	 {
		for(j=0;j<m;j++)
			cout<<"\t"<<matriz[i][j];
		cout<<"\n";
	 } 
	 int aux=0;
     for(i=0;i<n;i++){
          aux=0;            
	    for (j=0;j<m;j++){
            aux+= matriz[i][j];
        }
       cout<<"\n"<<aux; 
     } 
 system("pause");	
} 
