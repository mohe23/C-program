#include<iostream>
using namespace std;

class Base0{
public:
    int var0;
    void fun0(){cout<<"Member of Base0"<<endl;}
};

class Base1:public Base0{
public:
    int var1;

};

class Base2:public Base0{
public:
    int var2;

};


class Derived:public Base1,public Base2{
public:
    int var;
    void fun(){cout<<"Member of Derived"<<endl;}
};


int main(){
   Derived d;
   d.Base1::var0 = 2;//要借助直接基类才能标识。
   d.Base1::fun0();
   d.Base2::var0 = 3;
   d.Base2::fun0();
   d.var1 = 34;
   cout<<d.var1<<endl;
return 0;
}
