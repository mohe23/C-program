#include<iostream>
using namespace std;

class Base1{
public:
    int var;
    void fun(){cout<<"Member of Base1"<<endl;}
};

class Base2{
public:
    int var;
    void fun(){cout<<"Member of Base2"<<endl;}
};


class Derived:public Base1,public Base2{
public:
    int var;
    void fun(){cout<<"Member of Derived"<<endl;}
};


int main(){
   Derived d;
   Derived *p = &d;

   d.var = 1;
   d.fun();

   d.Base1::var = 2;//使用作用域分辨标识符来访问Base1类的成员。
   d.Base1::fun();

   d.Base2::var = 3;
   d.Base2::fun();

   cout<<d.var<<d.Base1::var<<d.Base2::var<<endl;
return 0;
}
