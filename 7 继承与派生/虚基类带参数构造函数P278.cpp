#include<iostream>
using namespace std;

class Base0{
public:
    Base0(int var):var0(var){cout<<"c0"<<endl;}
    int var0;
    void fun0(){cout<<"Member of Base0"<<endl;}
};

class Base1:virtual public Base0{ //Base0����������Base1������ࡣ
public:
    Base1(int var):Base0(var){cout<<"c1"<<endl;}
    int var1;

};

class Base2:virtual public Base0{//Base0����������Base2������ࡣ
public:
    Base2(int var):Base0(var){cout<<"c2"<<endl;}
    int var2;

};


class Derived:public Base1,public Base2{
public:
    Derived(int var):Base2(var),Base0(var),Base1(var){cout<<"cde"<<endl;}//�����๹�캯���ĵ���˳���Ǽ̳�˳�򣩣�0,1,2��de������һ��д�����˳���޹ء�
    int var;
    void fun(){cout<<"Member of Derived"<<endl;}
};


int main(){
   Derived d(1);
   d.var = 2;
   d.fun();

return 0;
}
