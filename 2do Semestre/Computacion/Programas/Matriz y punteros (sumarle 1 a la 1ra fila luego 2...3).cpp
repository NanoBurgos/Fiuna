//Declare una matriz de n elementos que cargue n números e imprima dicha matriz
//de la siguiente forma: a la primera fila sumar de 1, la segunda 2 y asi
//sucesivamente...

#include<iostream>
using namespace std;
int entpos();
main()
{
      int i,j,m=entpos(),n=entpos(),k=0;
      float M[m][n],*s;
      for(i=0;i<m;i++)
      for(j=0;j<n;j++)
      {cout<<"Digite la componente M["<<i+1<<"]["<<j+1<<"]=";cin>>M[i][j];}
      
s=M[0];  //ó s=&M[0][0];
for(i=0;i<m;i++)
{cout<<"\n|";
for(j=0;j<n;j++)
{cout<<" "<<*(s+k)+i+1;
k++;}
cout<<"|";
}
cout<<"\n\n";
system("pause");
}

int entpos()
{
    int q;
    do{cout<<"Digite un numero entero y positivo: ";
       cin>>q;}
    while(q!=int(q)||q<=0);
    return (q);
}
