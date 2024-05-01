#include<iostream>
using namespace std;

class base1{
public:
    void display() const {cout<<"base1::display()"<<endl;}
};

class base2:public base1{
public:
    void display() const {cout<<"base2::display()"<<endl;}
};

class derive:public base2{
public:
    void display() const {cout<<"derive::display()"<<endl;}

};

void func(base1*ptr){
          ptr->display();//对象指针->对象成员。（对象名.对象成员）。
}

int main(){
   base1 b1;
   base2 b2;
   derive d1;
   //函数的形参可以是基类的的对象（指针或引用）。，那么实参可以是公有派生类的对象（指针或引用）
   func(&b1);//用base1的对象的指针调用函数。
   func(&b2);//用base2的对象的指针调用函数。
   func(&d1);//用derive的对象的指针调用函数。
return 0;
}
