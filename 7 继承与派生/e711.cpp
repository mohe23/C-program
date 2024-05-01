#include<iostream>
using namespace std;

class BaseClass{
public:
    void fn1(){cout<<"hello!"<<endl;}
    void fn2(){cout<<"bybe!"<<endl;}

};


class DeriveClass:public BaseClass{
public:
    void fn1(){cout<<"kitty!"<<endl;}
    void fn2(){cout<<"dog!"<<endl;}

};


int main(){
  DeriveClass d1;
  BaseClass *b1;
  DeriveClass*d2;
  d1.fn1();
  d1.fn2();
  b1->fn1();
  b1->fn2();
  d2->fn1();
  d2->fn2();


return 0;
}
