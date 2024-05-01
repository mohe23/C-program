#include<iostream>
using namespace std;

class base1{//抽象类
public:
    virtual void display() const=0;//纯虚函数。
};


class base2:public base1{
public:
    void display() const;// 派生类中一个虚函数可以没有“virtual”关键词。一般都加上。
};

void base2::display() const{
   cout<<"base2::display()"<<endl;
}
class derive:public base2{
public:
    void display() const;// {cout<<"derive::display()"<<endl;}

};

void derive::display() const{
    cout<<"derive::display()"<<endl;
}

void func(base1*ptr){
          ptr->display();//对象指针->对象成员。（对象名.对象成员）。
}

int main(){
   //base1 b1;
   base2 b2;
   derive d1;
   //函数的形参可以是基类的的对象（指针或引用）。，那么实参可以是公有派生类的对象（指针或引用）
   //func(&b1);//用base1的对象的指针调用函数。
   func(&b2);//派生类的虚函数就覆盖了基类的虚函数。
   func(&d1);//

return 0;
}
