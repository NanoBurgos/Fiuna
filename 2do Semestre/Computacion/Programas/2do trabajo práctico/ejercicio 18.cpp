#include<iostream>
using namespace std;
int entpos();
int primo(int);
main()
{
      int i,j;
      cout<<"Numero de fila: ";int m=entpos();
      cout<<"Numero de columnas: ";int n=entpos();   
    float M[m][n];
    cout<<"\n\nIngrese las componentes de la matriz\n\n";
for(i=0;i<m;i++)
            {for(j=0;j<n;j++)
                             { cout<<"M["<<i+1<<"]["<<j+1<<"]: ";
                             M[i][j]=entpos(); } 
            }
cout<<"\n\n\n\t La matriz leida es: ";
for(i=0;i<m;i++)
{cout<<"\n\n\t|";
            for(j=0;j<n;j++)
            {cout<<M[i][j]<<"  ";}
cout<<"|";}

for(i=0;i<m;i++)
{        for(j=0;j<n;j++)
            {M[i][j]=primo(M[i][j]);}
}

cout<<"\n\n\n\t La matriz modificada es: ";
for(i=0;i<m;i++)
{cout<<"\n\n\t|";
            for(j=0;j<n;j++)
            {cout<<M[i][j]<<"  ";}
cout<<"|";}


system("pause");
}

int entpos()
{
    float q;
    cin>>q;
    while(q!=int(q)||q<=0)
    {cout<<"el numero debe ser entero y positivo. Digite nuevamente: ";cin>>q;}
    return int (q);
}

int primo(int a)
{
    int k,v,x=0;
    for(k=1;k<=a;k++)
    if(a%k==0)x++;
   
   if(x==2)
   {v=0;}
    else
    {v=a;}
    return (v);    
}
