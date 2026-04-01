#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void print(int *s, int m, int n);
int main()
{
int n,m,i,j;
int *s;
cout << "\n\tINGRESE EL NUMERO DE FILAS\nM=";
      cin >> m; 
cout << "\n\tINGRESE EL NUMERO DE COLUMNAS\nN=";
      cin >> n;       
      int mat[m][n];
      /*crear matriz*/
      cout <<"\n";
      for(i=0;i<m;i++)
      for(j=0;j<n;j++)
      {
         cout << "mat[" << i+1 <<"]["<< j+1 <<"]="; cin >> mat[i][j];
      }
       cout<<"\n\n\tLA MATRIZ 1\n\n";
      s=mat[0]; print(s,m,n);
      
      int mata[m+1][n+1];
      int menor,mayor;
      for(i=0;i<m;i++)
       {for(j=0;j<n;j++)
       mata[i][j]=mat[i][j];
       }
     
      for(i=0;i<m;i++)
      {
        mayor=mat[i][0];
         for(j=0;j<n;j++)
          if(mayor < mat[i][j])
           mayor=mat[i][j];
            mata[i][n]=mayor;
      }
       for(i=0;i<n;i++)
       {  menor=mat[0][i];
          for(j=0;j<m;j++)
           if(menor > mat[j][i])
             menor=mat[j][i];
         mata[m][i]=menor;
       }
       mata[m][n]=0;
       cout << "\n\nLa matriz ampliada es\n\n";
       s=mata[0]; print(s,m+1,n+1);
       system("pause");return main();
}

void print(int *s, int m, int n)
{
     int i,j;
     for(i=0;i<m;i++)
     { cout <<"\t|\t";
       for(j=0;j<n;j++)
       cout<<*(s+j+(m*i))<<"\t";
       cout<<"|\n";
     }
}
