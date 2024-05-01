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
          ptr->display();//����ָ��->�����Ա����������.�����Ա����
}

int main(){
   base1 b1;
   base2 b2;
   derive d1;
   //�������βο����ǻ���ĵĶ���ָ������ã�������ôʵ�ο����ǹ���������Ķ���ָ������ã�
   func(&b1);//��base1�Ķ����ָ����ú�����
   func(&b2);//��base2�Ķ����ָ����ú�����
   func(&d1);//��derive�Ķ����ָ����ú�����
return 0;
}
