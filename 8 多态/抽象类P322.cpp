#include<iostream>
using namespace std;

class base1{//������
public:
    virtual void display() const=0;//���麯����
};


class base2:public base1{
public:
    void display() const;// ��������һ���麯������û�С�virtual���ؼ��ʡ�һ�㶼���ϡ�
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
          ptr->display();//����ָ��->�����Ա����������.�����Ա����
}

int main(){
   //base1 b1;
   base2 b2;
   derive d1;
   //�������βο����ǻ���ĵĶ���ָ������ã�������ôʵ�ο����ǹ���������Ķ���ָ������ã�
   //func(&b1);//��base1�Ķ����ָ����ú�����
   func(&b2);//��������麯���͸����˻�����麯����
   func(&d1);//

return 0;
}
