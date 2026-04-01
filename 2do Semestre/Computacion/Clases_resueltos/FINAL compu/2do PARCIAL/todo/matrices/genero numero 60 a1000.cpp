/*Genere, al azar, un conjunto de 60 enteros no negativos menores que 1000, 
 los cargue consecutivamente, en el orden en que son generados, en una matriz 
 de 10x6 y determine e imprima un valor central de los mismos, es decir un numero
  entero o fraccionario med, que separe al conjunto de datos generados en dos
   subconjuntos de igual número de elementos,   el primero constituido por los 
   números menores que med y el segundo por los mayores que med */
#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void imprimir(int *s);
int main()
{
    int i,j,mat[10][6],s;
    srand(time(NULL));
    for(i=0;i<10;i++)
     for(j=0;j<6;j++)
     {  
        mat[i][j]=rand()%1000;
        s+=mat[i][j];
     }
     cout << "\n\nLa matriz es\n";
     imprimir(mat[0]);
     cout << "\n\nEL valor central es " << s/2 << "\n\n";
     system("pause"); return 0;
}
void imprimir(int *s)
{
    int i,j;
    cout << "\n\n";
    for(i=0;i<10;i++)
     {
        cout <<"|\t";
     for(j=0;j<6;j++)
       cout << *(s+j+i*6) << "\t";
     cout <<"|\n";
     }
}
