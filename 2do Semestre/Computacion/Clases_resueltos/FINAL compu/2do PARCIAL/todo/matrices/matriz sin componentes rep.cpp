/*Matriz sin componentes repetidas: Diseñar un programa en C/C++ que lea dos números 
enteros y positivos, m y n, a continuación declare una matriz mat de mxn componentes,
 luego vaya leyendo los componentes de a uno, he impida que (durante la lectura
  de tales componentes) se   introduzcan componentes repetidos. Por ultimo se imprime
   la matriz en pantalla. */
#include<iostream>
using namespace std;
void printmat(float *s,int m, int n);
void cargarmat(float *s,int m, int n);
int validar( char msg[]);
int main()
{
    int m,n;
    m=validar("\n\ningrese el numero de filas\nM=");
    n=validar("\n\ningrese el numero de columnas\nN=");
    float mat[m][n];
    cargarmat(mat[0],m,n);
    cout <<"\n\nLa matriz sin componentes repetidas es \n\n";
    printmat(mat[0],m,n);
    
    system("pause");return 0;
    
}
int validar(char msg[])
{
    float a;
    cout << msg;
    cin >> a;
    while (a<=0 || a!=int(a))
     {
         if(a<=0) 
             { cout << "\a\aEL NUMERO DEBE SER MAYOR A 0\n\nINGRESE NUEVAMENTE\n\n";
             cin >> a;
             }
         else { cout << "\a\aEL NUMERO DEBE SER ENTERO Y POSITIVO\n\nINGRESE NUEVAMENTE\n\n";
                cin >> a;
             }
     }
     return int (a);
}
void cargarmat(float *s,int m,int n)
{
     int i,j,a=1,c=0;
     for(i=0;i<m;i++)
       for(j=0;j<n;j++)
         { 
              cout << "A[" <<i+1<<"]"<<"["<<j+1<<"]=";
              cin >> *(s+j+n*i);
              if (j+n*i>0)
                 for(a=1;j+n*i>=a;a++)
                    if(*(s+j+n*i)==*(s+j-a+n*i))
                     {
                       cout << "\n\n\a NUMERO YA INGRESADO... ingrese nuevamente\n\n";
                       cout << "A[" <<i+1<<"]"<<"["<<j+1<<"]=";
                       cin >> *(s+j+n*i);a=0; cout <<"\n";
                     }            
         }
}
void printmat(float  *s,int m,int n)
{
     int i,j;
     for(i=0;i<m;i++)
     {  cout << "|\t";
       for(j=0;j<n;j++)
         { 
              cout <<  *(s+j+n*i) << "\t";
         }
         cout << "|\n";
     }
}   
