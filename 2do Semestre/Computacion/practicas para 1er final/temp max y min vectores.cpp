/*Se tienen las temperaturas (promedio) de todos los días del mes de febrero de 2014 almacenados 
en el vector Temp (luego de cargar por teclado). Diseñar un algoritmo que obtenga las temperaturas 
máxima, mínima (e indica los días correspondientes), y el promedio de las que se encuentran entre los días 21 y 28. */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
main()
{
	int temp[10];  
	int i;
	float suma=0, max=0, min=0, diamax, diamin,  promedio;
	cout<<"ingrese las temperaturas de los dias \n";
	for(i=0;i<10;i++)
	{
		 //temp[i]= 1+rand()%42;  
		cout<<"dia["<<i+1<<"]: ";
		//cout<<temp[i]<<endl;  
		cin>>temp[i];
	}
		
	max=temp[0];
	min=temp[0];
	for(i=0;i<10;i++)
	{
		if(max<temp[i])
		{
			max=temp[i]	;
			diamax= i+1;
		}
		if(min>temp[i])
		{
			min=temp[i];
			diamin=i+1;
		}	
		
		if(i>=5 and i<=10)
		{
			suma = suma+ temp[i];
		}
			
	}
	 promedio= suma/(5) ;
	 cout<<"el dia con maxima temperatura fue: "<<max<<" en el dia : "<< diamax<<endl<<endl;
	 cout<<"el dia con minima temperatura fue: "<<min<<" en el dia : "<< diamin<<endl<<endl;
	 cout<<"la suma entre los dias 21 y 28 es: "<<suma<<endl<<endl;
	 cout<<"el promedio de los dias fue : "<<promedio<<endl<<endl;
	 
	
	system("pause>null");
	
}



/*
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
main(){
     srand(time(NULL));  
     int i, temp[28] ;
     int max, min, suma =0;
     for(i=0;i<28;i++){     //ingreso de datos al vector
          temp[i]=1+rand()%42;       
     }
     max=temp[0];
     min=temp[0];
     for(i=0;i<28;i++){
        cout<<"temp["<<i+1<<"]:"<< temp[i]<<"\n";              
     }                   
     for(i=0;i<28;i++){ 
        if (max<temp[i]){
            max=temp[i];             
        } 
        if (min>temp[i]){
            min=temp[i];             
        }
        if (i>=20 && i<=27){
          suma = suma + temp[i]; 
        }                                         
     }
     cout<<"El mayor es: "<<max<<endl;
     cout<<"El menor es: "<<min<<endl;  
     cout<<"El suma entre 21 y 28  es: "<<suma<<endl; 
     cout<<"El promedio en ente 21 y 28 es:"<<1.0*suma/8;   
     system("pause");
}


*/






/*void funcionrand(void);
main(){
  funcionrand();
  system("pause");     
}
void funcionrand(void){  
   int i, r;
   for(i=0;i<10;i++){
      r=  rand()%100;        
      cout<<r<<"\t";               
   }                    
}
*/
