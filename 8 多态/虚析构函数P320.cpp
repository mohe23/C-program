#include<iostream>
using namespace std;

class base{
public:
    virtual ~base();
};

base::~base(){
   cout<<"���� base!"<<endl;
}

class Derived:public base{
public:
    Derived();
    ~Derived();
private:
    int*p;
};

Derived::Derived(){
  p = new int(0);
}

Derived::~Derived(){
  cout<<"����derive!"<<endl;
  delete p;
}

void fun(base*b){
  delete b;
}


int main(){
  base*b = new Derived();//���������������û������Ϊ���������������������������û�б�ִ�У�����p��ռ�õ��ڴ��û�б��ͷš�
  fun(b);   //�������������������Ϊ�������������ͽ�������������
return 0;
}
