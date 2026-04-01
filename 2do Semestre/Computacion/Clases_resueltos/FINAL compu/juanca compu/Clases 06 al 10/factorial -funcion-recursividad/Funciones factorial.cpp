#include<iostream>
using namespace std;
//Declaramos las funciones antes del main
double fac(int);
 /*
   Primero se indica el tipo de variable que va a retornar, en este caso: double.
   Seguido del nombre de la funcion, entre parentesis se colocan los tipos de 
   variables de entrada separados por coma.
 */
int valid();
 /*
   Declaramos una funcion que retorna un valor entero y positivo.
   Dentro del parentesis no se coloca nada debido a que no se necesita de ningun 
   valor inicial para que se desarrolle la funcion.
 */
main()
{
 int n;
 n=valid();//Aqui se llama a la funcion valid y la misma retorna un valor en n
 double p;
 p=fac(n);//La funcion fac retorna un valor en p
 cout<<"factorial("<<n<<")= "<<p<<endl;//Se imprime el resultado
 system("pause");
}
//Luego del main se desarrolan las funciones
int valid()
{
 float x;
 do{
    cout<<"Ingrese un nro entero no negativo: ";cin>>x;
    if(x!=int(x)||x<0)
    cout<<"Error"<<endl;
   }
 while(x!=int(x)||x<0);
 return int(x); //retornamos el resultado final
}
double fac(int n)//Aqui definimos los nombres de las variables de entrada, en este caso: n.
{
 int i; double p=1;
 if(n==0)
  return 1;
 else
 {
  for(i=1;i<=n;i++)
   p=p*i;
  return p;//retornamos el resultado final
 }
}
