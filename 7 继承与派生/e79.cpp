#include<iostream>
using namespace std;

class Base{
public:
    void fn1(){cout<<"hello!"<<endl;}
    void fn2(){cout<<"bybe!"<<endl;}

};

class Derived:private Base{//��������˽�м̳�ʱ���ڼ̳�������д�����ͬ����Ա��������������ʹ�ü̳���Ķ������ʹ�û����Ա��������
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
