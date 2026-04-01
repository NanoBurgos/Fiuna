#include<iostream>  //punto de silla;
using namespace std;
main(){
       int i, j,m,n;
       cout<<"Ingrese el numero m para la matriz: ";cin>>m;
       cout<<"Ingrese el numero m para la matriz: ";cin>>n;
       int a[m][n];
       int maxfila[m];
       int mincol[n];
        for(i=0;i<m;i++){
            maxfila[i]=-999;             
        } 
        for(i=0;i<n;i++){
            mincol[i]=999;             
        }                
       	for(i=0;i<m;i++){
	    	for(j=0;j<n;j++){
			cout<<"mat["<<i<<"]["<<j<<"]:";
            cin>> a[i][j]; cout<<"\n" ;
                }
	   }
	   for(i=0;i<m;i++){
	     for(j=0;j<n;j++)       	
		cout<<"\t"<<a[i][j];             	
		cout<<"\n";
	  }
       for (i=0;i<m;i++){
          for (j=0;j<n;j++){   
              if (a[i][j]>=maxfila[i]){
                   maxfila[i]= a[i][j];                 
              } 
              if (a[i][j]<=mincol[j]){
                   mincol[j]= a[i][j];                 
              }                      
          }       
       }
       printf("\n");
       for (i=0;i<m;i++){
            cout<<"\t"<<maxfila[i];
           }
       printf("\n");
       for (j=0;j<n;j++){
            cout<<"\t"<<mincol[j];
           }
       int puntosilla=0;   
       for (i=0;i<m;i++){
          for (j=0;j<n;j++){
          if (maxfila[i]==mincol[j]){
              puntosilla++;
                                     
          cout<<"\nEl punto de silla es: "<<i<<","<<j<<"\n";
          }
         }
    }
    if (puntosilla==0){
        cout<<"No exite punto de silla";           
     }                   
    system("pause");
    return 0;    
}

