//crear un algoritmo que cargue dos nros enteros m y n y luego cargue una matriz mxn. Luego imprima dichas componentes.
#include<iostream>
using namespace std;
int entpos();
main()
{
int i, j, m=entpos(), n=entpos();
float M[m][n];

//carga de la matriz
for(i=0;i<m;i++)
for(j=0;j<n;j++)
      {cout<<"digite la componente M[ "<<i+1<< " ][ "<<j+1<<" ]: ";cin>>M[i][j];}
            
//impresion de la matriz
      cout<<"la matriz formada es: M= \n";
      for(i=0;i<m;i++)
      {cout<<"|";
      for(j=0;j<n;j++)
      {cout<<"\t"<<M[i][j]<<"\t";}
      cout<<"\t|"<<"\n";}
      
system("pause");      
}
int entpos()   
{
    float q;
    do{cout<<"digite un nro positivo: ";cin>>q;}
    while(q!=int(q) || q<=0);
    return int (q);
}
