#include<iostream>
using namespace std;
void sub(int*);
main(){
   int a=3;
   sub(&a);
   cout<<a;
   system("pause");
}
void sub(int *ptr){
  *ptr=10;
}
