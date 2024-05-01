#include<iostream>
using namespace std;


void fun1(){

   static int a = 5;
   int b = 10;

   cout<<"fun1     a: "<<a<<"  b: "<<b<<endl;
   a = a + 5;
   b = b + 2;
}


int main(){
    static int a;
     int b = 15;
     cout<<"main     a: "<<a<<"  b: "<<b<<endl;
     fun1();
     fun1();
     fun1();
     a++;
     cout<<"main     a: "<<a<<"  b: "<<b<<endl;
     fun1();
     return 0;
}
