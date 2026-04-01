/*TAA2011Parcial2
  Ingresar una matriz de orden m x n. Imprimir la matriz. Ordenar los
  elementos en forma ascendente, de la mitad superior de la matriz, y en forma 
  descendente la mitad inferior. Si el numero de filas es impar la fila del medio
  de la matriz no se ordena. */
#include<iostream>
using namespace std;
void imprimir(float*,int,int);
void ascendente(float*,int);
void descendente(float*,int);
main()
{int i,j; float m,n,limite;
 do{cout<<"Ingrese la cantidad de filas: ";cin>>m;
    cout<<"Ingrese la cantidad de columnas: ";cin>>n;}
 while(m<=0||m!=(int)m||n<=0||n!=(int)n);
 float mat[int(m)][int(n)];
 for(i=0;i<m;i++)
 {for(j=0;j<n;j++)
  {cout<<"mat["<<i+1<<"]"<<"["<<j+1<<"]= ";cin>>mat[i][j];}
  cout<<"\n";}
 cout<<"La matriz ingresada es:\n";
 imprimir(&mat[0][0],int(m),int(n));
 limite=int(m/2)*n;
 ascendente(mat[0],int(limite));
 if(int(m)%2==0)i=int(m/2);
 else i=int(m/2)+1;
 descendente(&mat[i][0],int(limite));//alternativa: descendente(mat[i],int(limite));
 cout<<"La matriz ordenada es:\n";
 imprimir(mat[0],int(m),int(n));
 cout<<"\n";
 system("pause");
}
void imprimir(float*mat,int m,int n)
{int i,j;
 for(i=0;i<m;i++)
 {cout<<"| ";
  for(j=0;j<n;j++)
   cout<<mat[n*i+j]<<" ";//alternativa: cout<<*(mat+n*i+j)<<" ";
  cout<<"|\n";}
}
void ascendente(float*v,int n)
{int i,j;
 float aux;
 for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
   if(*(v+i)>*(v+j))
   {aux=*(v+j);
    *(v+j)=*(v+i);//alternativa: v[j]=v[i]
    *(v+i)=aux;}
}
void descendente(float*v,int n)
{int i,j;
 float pivot;
 for(i=1;i<n;i++)
 {pivot=*(v+i);
  for(j=i-1;j>=0 && pivot>*(v+j);j--)
   *(v+j+1)=*(v+j);
  *(v+j+1)=pivot;}
}
