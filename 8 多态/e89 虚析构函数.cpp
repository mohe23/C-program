#include<iostream>
using namespace std;

class base{
public:
     virtual~base(){
      cout<<"de base!!!"<<endl;
    }
};


class deri:public base{
public:
    ~deri(){
      cout<<"de deri!!!"<<endl;
    };
};

int main(){
   base*b = new deri;//�����಻���������������Ͳ��ܹ����������ࣻ�����������������������ܹ����������Լ������ࡣ
   delete b;

return 0;
}
