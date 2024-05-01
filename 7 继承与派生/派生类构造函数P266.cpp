#include<iostream>
using namespace std;

class Base1{
public:
    Base1(int i){cout<<"Constructing Base1 "<<i<<endl;}
};


class Base2{
public:
    Base2(int j){cout<<"Constructing Base2 "<<j<<endl;}
};


class Base3{
public:
    Base3(){cout<<"Constructing Base3*"<<endl;}
};

class Derived:public Base2,public Base1,public Base3{
public:
    Derived(int a, int b, int c, int d):Base1(a),member2(d),member1(c),Base2(b){}//继承类的构造函数。这里的顺序与实际执行的顺序无关。
private:
    Base1 member1;
    Base2 member2;
    Base3 member3;

};


int main(){
     Derived obj(1,2,3,4);//先调用基类的构造函数，即2,1,3(继承顺序)，再调用新增成员的构造，1,2,3(成员的声明顺序)。

return 0;
}
