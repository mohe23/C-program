#include<iostream>

using namespace std;


class A{
public:
    A(int i);
    void print();

private:
    const int a; //�����ݳ�Ա��
    static const int b; //��̬�����ݳ�Ա��

};

const int A::b = 10;  //��̬����������˵���Լ���ʼ����

A::A(int i):a(i){}

void A::print(){
     cout<<a<<","<<b<<endl;
}


int main(){
   A a1(100), a2(10);
   a1.print();
   a2.print();

 return 0;
}
