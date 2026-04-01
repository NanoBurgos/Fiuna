// Uso de punteros
#include<iostream>
using namespace std;
void entpos(int*);
main()
{// Declaracion de un puntero
 int *a; /* int -> es el tipo de dato al que apunta
            el simbolo " * " -> indica que es un puntero
              a -> es el nombre del puntero */
 // Un puntero contiene una dirección de memoria 
 // Usos
 // 1) Asignacion de la direccion de memoria de una variable a un puntero
       int N;
       a=&N; // el simbolo " & " -> da la direccion de N en este caso
       cout<<"\n\nDireccion de memoria de N: "<<a;
       //alternativa
       cout<<"\n\nDireccion de memoria de N: "<<&N;
 // 2) Como parametro de una funcion
       entpos(a);// alternativa: ent_pos(&N)
       cout<<"\nN= "<<*(a);//alternativa: cout<<"\nN= "<<N;
       // el simbolo " * " -> da el contenido de la direccion a la que apunta a
 // 3) Relacion entre punteros y vectores
       int v[N];
       a=v; /* v contiene la dirección de la primera componente del vector. 
               alternativa: a=&v[0];*/
       cout<<"\n\nDireccion de la 1ra componente de v: "<<v;
       //alternativa
       cout<<"\n\nDireccion de la 1ra componente de v: "<<&v[0]
           <<"\n\n";
       // Cargar el vector v
       int i;
       for(i=0;i<N;i++)
       {cout<<"v["<<i+1<<"]= ";
        cin>>*(a+i);}/* a un puntero se le puede sumar o restar un entero para 
                       poder avanzar a las direcciones de memoria adyacentes */
       //Imprimir el vector v
       cout<<"\nv=["<<v[0];
       for(i=1;i<N;i++)
       cout<<", "<<*(a+i);// formas análogas *(v+i) -> a[i] -> v[i]
       cout<<"]\n\n";
       //alternativa
       cout<<"v=["<<a[0];
       for(i=1;i<N;i++)
       cout<<", "<<a[i];
       cout<<"]\n\n";
 // 4) Relacion entre punteros y matrices
       int M; a=&M;
       entpos(a);
       int mat[M][N];
       a=mat[0]; /* mat[0] contiene la dirección 
                    de la primera componente de la fila 0
                    alternativa:a=&mat[0][0];*/
       cout<<"\n\nDireccion de la 1ra componente de mat: "<<mat[0];
       //alternativa
       cout<<"\n\nDireccion de la 1ra componente de mat: "<<&mat[0][0]
           <<"\n\n";
       // Cargar la matriz
       cout<<"M= "<<M<<" N= "<<N<<"\n\n";
       int j;
       for(i=0;i<M;i++)
       {for(j=0;j<N;j++)
        {cout<<"mat["<<i+1<<"]["<<j+1<<"]= ";
         cin>>mat[i][j];}
        cout<<"\n";}
       // Imprimir la matriz
       for(i=0;i<M;i++)
       {cout<<"|\t";
        for(j=0;j<N;j++)
        cout<<*(a + N*i + j)<<"\t";//Forma análoga a[N*i + j]
        cout<<"|\n";}
       cout<<"\n\n";
 system("pause");
}
void entpos(int *n)
{float x;
 do{cout<<"\n\nIngrese un numero entero y positivo: ";
    cin>>x;} 
    // el simbolo " * " -> da el contenido de la direccion a la que apunta n
 while(x!=int(x)|| x<=0);
 *n=int(x);
}
