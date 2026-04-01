#include <iostream>
#include <stdlib.h>
using namespace std;
void juego(void);
int condicion(void);
main(){
       int respuesta = 1;
       srand(time(NULL));
       do {
       juego();
       respuesta = condicion();   
       }while(respuesta);           
       system("pause");
}  
void juego(void){
     int x, y , l=0;
     x= 1+ rand()%100;
     cout<<"Tengo un numero de 1 a 100"
            "\nPuede adivinar"
            "\nIngrese su congetura\n"; 
     do
     { 
        cin>>y;             
        if (x==y){
           cout<<"Excelente ha adivinado el numero!!\n";
           break;
        }
        if(x>y){
           cout<<"Demasiado bajo vuelva a intentarlo\n" ;   
        }else{
          cout<<"Demasiado alto vuelva a intentarlo\n" ;    
       }   
       l++;
       if (l==5){
          cout<<"termino sus posibilidades!!!!\n";       
          break;             
       }                                              
     }while(x!=y);         
}
int condicion(void){
    int r;
    do
    {
    cout<<"Le gustaria jugar de nuevo SI = 1 o NO = 0\n";
    cin>>r;
    }while((r!=1) and (r!=0));
    return r;  
}              
