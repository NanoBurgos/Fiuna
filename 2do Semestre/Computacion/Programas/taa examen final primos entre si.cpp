/*Lea e imprima un número entero y positivo de seis dígitos significativos (validarlo) 
como una variable simple entera m. Luego imprima a) el número constituido por los tres 
últimos dígitos significativos; b) el número constituido por los tres primeros dígitos 
significativos; c) un mensaje aclaratorio si éstos son o no primos entre si.*/

#include<iostream>
using namespace std;
int entpos();
int mcd(int, int );
main()
{
      float m,n;
      int a,b,x,u,d,c,um,dm,cm;
     cout<<"Ingrese un nro de 6 digitos significativos: ";m=entpos();
u=int (m)%10;
d=(int(m)%100)/10;
c=(int(m)%1000)/100;
um=(int(m)%10000)/1000;
dm=(int(m)%100000)/10000;
cm=(int(m)%1000000)/100000;

a=(100*c)+(10*d)+(u);
b=(100*cm)+(10*dm)+(um);
cout<<"Los nros formados son: "<<a<<" y "<<b;

      x=mcd (a,b);
      if(x==1)
      cout<<"\nEstos numeros son primos entre si\n";
      else
    {  cout<<"\nEstos numeros NO son primos entre si\n";
      cout<<"ya que su MCD es: "<<x<<endl; }
      
system("pause");
}

int entpos()
{
    float q;cin>>q;
    while(q!=int(q)||q<100000||q>999999)
    {cout<<"El nro debe ser de 6 digitos.Favor, digite nuevamente: "; cin>>q;}
    return int (q);
}
int mcd(int a, int b )
{
    if (b==0)
    return a;
    else
    return mcd(b,a%b);
}
 
