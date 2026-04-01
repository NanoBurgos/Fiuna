/*
Genere un número al azar entre 1 y 100 y el usuario deberá adivinarlo. En cada
intento, el programa deberá informar al usuario si el número que introdujo es mayor o
menor con respecto al número que debe acertar. Cuando el usuario acierte el número, el
programa deberá indicarle el número de intentos realizados.
*/
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
 int n,x;
 srand(time(NULL));
 n=1+rand()%(101-1);
 cout<<n<<"adivine un numero generado aleatoriamente entre el uno y el 100\n";
 cin>>x;
 int j=0;
 while(x!=n)
 {cout<<"no ha acertado intente de nuevo\n";
 cin>>x;j++;}
 cout<<"felicidades ha acertado luego de "<<j+1<<" intentos\n";
 system("pause");
 return 0;
}
    
