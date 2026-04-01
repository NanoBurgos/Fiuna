#include <iostream>
using namespace std;
main() {
        int a, cont= 0, suma=0;
        float prom;
        cout<<"Ingrese el numero entero y positivo :";
        cin>>a;
        
        while(a>0){
          suma+= a;
          cont++;
          cout<<"Ingrese el numero entero y positivo :";
          cin>>a;        
        }
        
        prom = 1.0*suma/cont;
        if (cont>0){ 
           cout<<"EL PROMEDIO ES :" << prom<<"\n";        
        }else {
           cout<<"EL PRIMER NUMERO YA FUE UN NUMERO NEGATIVO\n";   
        }      
                               
        system("pause");  
        return 0;    
}
