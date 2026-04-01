//Luis A. Morinigo L. Ejercicio 20-Compu 2016
#include<iostream>
using namespace std;
int main()
{
    int n=1,x=1,s=0;
    while(n<=10000) //usamos while en vez de for, y condicionamos que n inicie en 1
    {
        while(x<=(n/2)) //el numero que lo va a dividir nunca superara a la mitad del numero ingresado
        {
            if(n%x==0) //condicion de divisor
                s=s+x; //como s inicio en 0, le sumaremos x
                x=x+1; //x inicio en 1
        }
        if(n==s) //comparacion si la suma es igual a 
            cout<<n<<" Es perfecto"<<endl;
        n=n+1; //restauramos los valores iniciales, para el siguiente numero
		x=1;
		s=0;
    }
    system("pause");
}
