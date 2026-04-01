/*Diseñar un programa en c++ tal que lea dos numeros 
enteros positivos m y n menores que 100 y lea los m*n 
elementos 'no repetidos' de una matriz entera mat. El progarma debe 
dar como salida la posicion que ocupa un punto silla o 
el mensaje "la matriz no tiene punto silla" segun el 
caso. Un punto silla de una matriz es un elemento 
que tiene la propiedad de ser a la vez el menor de su fila 
y el mayor su la columna*/
#include <iostream>
using namespace std;
int validar(void);
main()
{
    int m,n,i,j,k,t,col,fil,band;
    cout<<"\n\tIntroduzca el numero de filas: ";
    m=validar();
    cout<<"\n\tIntroduzca el numero de columnas: ";
    n=validar();
    int mat[m][n];
    //Ingresamos las componentes de la matriz y verificamos que no se repita
    cout<<"\n\tIntroduzca los elementos de la matriz:\n";
    for (i=0;i<m;i++)
     for(j=0;j<n;j++)
     {
      cout<<"\tmat["<<i+1<<"]["<<j+1<<"]= ";
      cin>>mat[i][j];
      //Verificamos que no sea repetido
      do{
         band=0;
         for(k=0;k<i;k++)
         { for(t=0;t<n;t++)
            if(mat[i][j]==mat[k][t])
            {
             cout<<"\tEl numero es repetido. Ingrese nuevamente."<<endl;
             cout<<"\tmat["<<i+1<<"]["<<j+1<<"]= ";
             cin>>mat[i][j];
             band=1;
             break;
            }
         }
         if(band!=1)
         { for(t=0;t<j;t++)
            if(mat[i][j]==mat[i][t])
            {
             cout<<"\tEl numero es repetido. Ingrese nuevamente."<<endl;
             cout<<"\tmat["<<i+1<<"]["<<j+1<<"]= ";
             cin>>mat[i][j];
             band=1;
             break;
            }
         }
        }
      while(band==1);
     }
    //Mostramos la matriz ingresada
    cout<<"\n\tla matriz introducida es:";
    for ( i=0;i<m;i++)
    { 
        cout<<"\n\t|\t";
        for(j=0;j<n;j++) 
        {cout<<mat[i][j]<<"\t";}
        cout<<"|";
    }
    //Algoritmo para hallar el punto silla
    band=0;
    for(i=0;i<m;i++)
    {
        col=0;
        for(t=1;t<n;t++)
        {
            if(mat[i][t]<mat[i][col])
            {
                col=t;
            }
        }
        fil=0;
        for(k=1;k<m;k++)
            if(mat[k][col]>mat[fil][col])
            {
                fil=k;
            }
        if(i==fil)
        {
            cout<<"\n\tLa matriz tiene un punto silla en "
                <<"mat["<<fil+1<<"]["<<col+1<<"]= "<<mat[fil][col];
            band=1;
        }
    }
    if(band==0)
    cout<<"\n\tLa matriz no tiene punto silla";
    cout<<"\n\n\n";
    system("pause");
    return 0;
}

int validar (void)
{
    float x;
    cin>>x;
    while(x<=0 || x!=int(x) || x>100)
    {
        cout<<"\n El valor debe ser entero, positivo y menor que 100";
        cout<<"\n\n\tIntroduzca de nuevo: ";
        cin>>x;
    }
    return int(x);
}
