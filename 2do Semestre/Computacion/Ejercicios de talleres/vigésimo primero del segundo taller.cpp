/* cargue dos matrices de orden mxn. Luego calcule la suma, la resta y el producto
(si es posible, imprimir aviso en caso contrario) de dichas matrices.
Luego imprima en pantalla la matrices resultado*/
#include<iostream>
using namespace std;
float producto(float *a, float *b,int m, int i, int j);
int main()
{
    float m, n;
    cout<<"Introduzca el numero de filas m de las dos matrices: "; cin>>m;
    while(m!=int(m)||m<=0)
    {                     cout<<"\nRecuerde que el numero de filas debe ser entero y positivo";
                          cout<<"\nVuelva a introducir el numero m de filas: "; cin>>m;        }
    cout<<"Introduzca el numero de columnas n de las dos matrices: "; cin>>n;
    while(n!=int(n)||n<=0)
    {                     cout<<"\nRecuerde que el numero de columnas debe ser entero y positivo";
                          cout<<"\nVuelva a introducir el numero n de columnas: "; cin>>n;        }                   
    // Declarando las matrices A y B
    float A[int(m)][int(n)], B[int(m)][int(n)];
    int i, j;
    // cargando la matriz A
    cout<<"\nIntroduzca los elementos de la matriz A.";
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cout<<"\n\nIntroduzca el elemento ["<<i<<"]["<<j<<"]: "; cin>>A[i][j];
                    }
    }
    // cargando la matriz B
    cout<<"\nIntroduzca los elementos de la matriz B.";
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cout<<"\n\nIntroduzca el elemento ["<<i<<"]["<<j<<"]: "; cin>>B[i][j];
                    }
    }
    
    //imprimiendo las matrices A y B
    cout<<"\nLa matriz A es:";
    for(i=0;i<m;i++)
    { cout<<"\n\t\t";
                    for(j=0;j<n;j++)
                    {
                                    cout<<A[i][j]<<"   ";
                    } cout<<"\n";
    }
    cout<<"\nLa matriz B es:";
    for(i=0;i<m;i++)
    { cout<<"\n\t\t";
                    for(j=0;j<n;j++)
                    {
                                    cout<<B[i][j]<<"   ";
                    } cout<<"\n";
    }
    // calculando la suma
    cout<<"\nLa suma de las matrices A y B es:";
    for(i=0;i<m;i++)
    { cout<<"\n\t\t";
                    for(j=0;j<n;j++)
                    {
                                    cout<<A[i][j] + B[i][j]<<"   ";
                    } cout<<"\n";
    }
    // calculando la resta
    cout<<"\nLa resta de las matrices A y B(A-B) es:";
    for(i=0;i<m;i++)
    { cout<<"\n\t\t";
                    for(j=0;j<n;j++)
                    {
                                    cout<<A[i][j] - B[i][j]<<"   ";
                    } cout<<"\n";
    }
    // calculando el producto
    float P[int(m)][int(n)];
    // algoritmo para calcular el producto
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    P[i][j]=producto(&A[0][0], &B[0][0], int(m), i, j);         
                    }
    }
    // imprimiendo el producto
    cout<<"\nEl producto de las matrices A y B es:";
    if(m==n)
    {
    for(i=0;i<m;i++)
    { cout<<"\n\t\t";
                    for(j=0;j<n;j++)
                    {
                                    cout<<P[i][j]<<"   ";
                    } cout<<"\n";
    }
    }
    else
    {
        cout<<"\nEl producto entre las matrices AxB no puede realizarce porque m es distinto de n\n";  
    }
    system ("pause");
}
float producto(float *a , float *b, int m, int i, int j)
{
      float prod=0, y, z; int x;
      for(x=0;x<m;x++)
      {
                  y=*(a+x+m*i);
                  z=*(b+j+m*x);  
                prod=prod+y*z;
      }
      return prod;
}
