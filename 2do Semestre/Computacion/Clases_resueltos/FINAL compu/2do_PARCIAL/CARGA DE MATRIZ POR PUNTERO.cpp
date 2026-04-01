/*carga 3 matrices por puntero,y ademas hacer una matriz en donde cada componente es la suma de los demas 
3 componente de la matriz matrices anteerior*/
#include<iostream>

using namespace std;

int validar();
/*carga de la matriz*/
void carga(float*p,int n)
{int i,j;
for(i=0;i<n;i++)
{for(j=0;j<n;j++){cout<<"mat["<<i+1<<"]["<<j+1<<"]=";cin>>p[i+j];}}
}
/*impresion del vector*/
void imprimir(float*r,int n)
{int i,j;
for(i=0;i<n;i++){cout<<"|";
for(j=0;j<n;j++){cout<<"\t"<<r[i+j];}
"|\n\t";} 
     }
/*proceso de declaracion*/
int main()
{int n,q,w;
cout<<"\n\tDigite la dimension de la matriz=";
n=validar();
float mat1[n][n],mat2[n][n],mat3[n][n],sum[n][n];/*declaracion de la matriz*/
/*carga de la matriz*/
cout<<"\n\tCarga las componente de primera la matriz=\n";
 carga(&mat1[0][0],n); 
 cout<<"\n\tCarga las componente de segunda la matriz=\n";
 carga(&mat2[0][0],n); 
cout<<"\n\tCarga las componente de tercera la matriz=\n";
 carga(&mat3[0][0],n); 
 /*==>UNA matriz tal que sus elementos son la suma de los termino se la matriz*/
 for(q=0;q<n;q++){cout<<"\n";
 for(w=0;w<n;w++)
 {sum[q][w]=0;
 sum[q][w]=mat1[q][w]+mat2[q][w]+mat3[q][w];}}

/*impresion de la matriz*/
cout<<"\n\tLa primera matriz es=";
 imprimir(&mat1[0][0],n); 
cout<<"\n\tLa segunda matriz es=";
 imprimir(&mat2[0][0],n); 
cout<<"\n\tLa tercera matriz es=";
 imprimir(&mat3[0][0],n); 
cout<<"\n\tLa Matriz del cual la suma cada elemento es la suma de las matrizes es="; 
 imprimir(&sum[0][0],n);

    cout<<"\n\t";
    }
    /*validacion*/
 int validar()
 {float x;
 do{cin>>x;}while(x!=int(x)||x<0);
     return(int(x));}   
