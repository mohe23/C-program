#include<iostream>
using namespace std;

class Base{
public:
    virtual fn1(){cout<<"bfn1!!!"<<endl;}
    fn2(){cout<<"bfn2!!!"<<endl;}
};

class Derive:public Base{
public:
    fn1(){cout<<"dfn1!!!"<<endl;}
    fn2(){cout<<"dfn2!!!"<<endl;}
};


int main(){
  Derive d1;
  Base*b = &d1;
  Derive*d2 = &d1;

  b->fn1();//������������fn1;��Ϊfn1���麯����
  b->fn2();//����ǻ����fn2
  d2->fn1();//������������fn1
  d2->fn2();//������������fn2

return 0;
}

