#include<iostream>
using namespace std;

class Base0{
public:
    int var0;
    void fun0(){cout<<"Member of Base0"<<endl;}
};

class Base1:virtual public Base0{ //Base0类是派生类Base1的虚基类。
public:
    int var1;

};

class Base2:virtual public Base0{//Base0类是派生类Base2的虚基类。
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
   d.var0 = 2;//当声明为虚基类，类的成员在内存中就只有1份副本。
   d.fun0();
   d.fun();

return 0;
}
