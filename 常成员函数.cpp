#include<iostream>

using namespace std;


class R{
public:
    R(int r1, int r2):r1(r1),r2(r2){} //构造函数。
    void print() const;
    void print();  //常成员函数。

private:
    int r1, r2;
};


void R::print() const{
      cout<<r1<<";"<<r2<<endl;
}


void R::print(){
       cout<<r1<<":"<<r2<<endl;
}


int main(){
     R a(5,4);
     a.print();
     const R b(7,34); //常对象。
     b.print();

 return 0;
}
