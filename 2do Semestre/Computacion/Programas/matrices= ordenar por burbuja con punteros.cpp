#include<iostream>
using namespace std;
int entpos();
main()
{
   int a=entpos(), b=entpos(),i,j;
   float m[a][b],*p, aux;
    for(i=0;i<a;i++)
    {
                    for(j=0;j<b;j++)
                    {
                                    cout<<"\nIngrese la componente ["<<i+1<<"]["<<j+1<<"]: ";
                                    cin>>m[i][j];
                    }
    }
    p=&m[0][0];//asigna la direccion del primer elemento al puntero(pasa a vector)
    for(i=0;i<(a*b);i++)//algoritmo burbuja al puntero(matriz)
    for(j=0; j<(a*b)-1; j++)
                                  
    if(*(p+j)>*(p+j+1))
    {aux=*(p+j);
    *(p+j)=*(p+j+1);
    *(p+j+1)=aux;}

    cout<<"\nLa matriz es: \n";
    for(i=0;i<(a*b);i++)//imprime la matriz ordenada
    {
    cout<<*(p+i)<<"\t\t";
    if((i+1)%b==0)
    cout<<endl;
    }

    system ("pause");
    return 0;
}

int entpos()
{
    int q;
    do{cout<<"Digite un numero entero y positivo: ";
       cin>>q;}
    while(q!=int(q)||q<=0);
    return (q);
}
