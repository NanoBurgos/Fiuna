#include<iostream>
using namespace  std;
void valid(int*);
void ingresarmat(float*,int,int,char);
void imprimirmat(float*,int,int);
void matrizamp(float*,float*,float*,int,int);
void escalonar(float*,int,int); 
void restarfilas(float*,float*,int,float);
void solucion(float*,float*,int,int);
main()
{
 int m,n;
 cout<<"Ingrese las filas"<<endl;
 valid(&m);
 cout<<"Ingrese las columnas"<<endl;
 valid(&n);
 float A[m][n],B[m][1],Amp[m][n+1],X[m][1];
 
 cout<<endl<<"Ingrese la matriz A"<<endl;
 ingresarmat(&A[0][0],m,n,'A');//cargamos la matriz A
 cout<<endl<<"La matriz A es"<<endl;
 imprimirmat(&A[0][0],m,n);//imprimimos la matriz A
 
 cout<<endl<<"Ingrese la matriz B"<<endl;
 ingresarmat(&B[0][0],m,1,'B');//cargamos la matriz B
 cout<<endl<<"La matriz B es"<<endl;
 imprimirmat(&B[0][0],m,1);//imprimimos la matriz B
 
 cout<<endl<<"La matriz ampliada es"<<endl;
 matrizamp(&Amp[0][0],&A[0][0],&B[0][0],m,n);//construimos la matriz ampliada
 imprimirmat(&Amp[0][0],m,n+1);//imprimimos la matriz ampliada
 
 cout<<endl<<"La matriz escalonada es"<<endl;
 escalonar(&Amp[0][0],m,n);//escalonamos la matriz ampliada
 imprimirmat(&Amp[0][0],m,n+1);//imprimimos la matriz ampliada escalonada
 
 //Verificamos si el sistema tiene solución
 if(Amp[m-1][n-1]==0 && Amp[m-1][n]==0 || m!=n)
  cout<<endl<<"El sistema AX=B tiene infinitas soluciones"<<endl;
 else
  if(Amp[m-1][n-1]==0 && Amp[m-1][n]!=0)
   cout<<endl<<"El sistema AX=B no tiene solucion"<<endl;
  else
   {cout<<endl<<"La solucion del sistema AX=B es"<<endl;
    cout<<"X= "<<endl;
    solucion(&Amp[0][0],&X[0][0],m,n);}
 system("pause");
}
//Función validación
void valid(int*p)
{
 float x;
 cout<<"Ingrese un nro entero y positivo: ";cin>>x;
 while(x!=int(x)||x<=0)
 {cout<<"Error!"<<endl;
  cout<<"Ingrese un nro entero y positivo: ";cin>>x;}
 *p=int(x);
}
//Función para cargar una matriz
void ingresarmat(float*p,int m,int n,char x)
{
 int i,j;
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   {cout<<x<<"["<<i+1<<"]["<<j+1<<"]= ";cin>>p[i*n+j];}
}
//Función para imprimir una matriz
void imprimirmat(float*p,int m,int n)
{
 int i,j;
 for(i=0;i<m;i++)
 {cout<<"\t";
  for(j=0;j<n;j++)
   cout<<p[i*n+j]<<"\t";
  cout<<endl;}
}
//Función para construir la matriz ampliada
void matrizamp(float*p,float*q,float*t,int m,int n)
{
 int i,j,N=n+1; //N es la cantidad de columnas de la matriz ampliada
 for(i=0;i<m;i++)
  for(j=0;j<n;j++)
   p[i*N+j]=q[i*n+j];/*Atencion! aqui hay que tener cuidado de colocar 
                       correctamente la cantidad de columnas,
                       N para la matriz ampliada y n para la matriz A*/
 p=p+n;//guardamos la dirección de la última componente de la primera fila en p              
 for(i=0;i<m;i++)    
 p[i*N]=t[i];
}
//Función para escalonar la matriz ampliada
void escalonar(float*p,int m,int n)
{
 int i,j,N=n+1; //N es la cantidad de columnas de la matriz ampliada
 float k;
 for(j=0;j<N;j++)//j es la posición del pivot
  for(i=j+1;i<m;i++)
   {k=p[i*N+j]/p[j*N+j];
    restarfilas(p+i*N+j,p+j*N+j,N-j,k);}
}
//Función para restar filas
void restarfilas(float*p,float*q,int x,float k)
{
 int j;
 for(j=0;j<x;j++)
 p[j]=p[j]-k*q[j];
}
//Función para mostrar la solución
void solucion(float*p,float*q,int m,int n)
{
 int i,j,k,N=n+1; float*t;
 t=p+n;//puntero asociado a la última columna de la matriz ampliada
 i=m-1; j=N-2;
 q[m-1]=t[i*N]/p[i*N+j];//calculamos la primera solución (de abajo hacia arriba)
 for(i=m-1;i>=0;i--)
 { q[i]=t[i*N];
   k=1;
   for(j=i+1;j<n;j++)
    {q[i*N]=q[i*N]-p[i*N+j]*q[i+k];
     k++;}
   q[i]=q[i]/p[i*N+i];
 }
 imprimirmat(q,m,1);//imprimimos la matriz ampliada
}
