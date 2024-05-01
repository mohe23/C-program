#include<iostream>
using namespace std;

class Base{
public:
    void fn1(){cout<<"hello!"<<endl;}
    void fn2(){cout<<"bybe!"<<endl;}

};

class Derived:private Base{//当基类是私有继承时，在继承类中重写基类的同名成员函数，这样可以使得继承类的对象可以使用基类成员函数。。
public:
    void fn1(){Base::fn1();}
    void fn2(){Base::fn2();}

};


int main(){
   Derived d;
   d.fn1();
   d.fn2();
  // d.Base::fn1();

return 0;
}
