#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b,t=0,x,y,i;
    cout<<"ingrese los numeros enteros y positivos";
    cin>>a;
    while(a!=int(a) and a<0)
    {
        cout<<"ingrese nuevamente";
        cin>>a;
             
      }
      x=int(a);
      cin>>b;
    while(b!=int(b) and b<0)
    {
        cout<<"ingrese nuevamente";
        cin>>b;
             
      }
    y=int(b);
if(a<b)
    {if(b%a==0){
                cout<<"los numeros no son primos";
                }
     else {
          cout<<"los numeros son primos";}
}
 if(b<a)
    {if(a%b==0){
                cout<<"los numeros no son primos";
                }
     else {
          cout<<"los numeros  son primos";}
}
                   
    system("PAUSE");
    return EXIT_SUCCESS;
}
