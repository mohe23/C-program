#include<iostream>
using namespace std;

class Ab{  //����1����
public:
    Ab(int a, int b);//���캯��
    Ab(Ab &u); //���ƹ��캯��
    int Rw();  //a*b
    int Ga();  //����a
    int Gb();  //����b

private:
    int la, lb;  //2��Ԫ��
};


Ab::Ab(int a, int b){  //���캯��ʵ��
    la = a;
    lb = b;
}

Ab::Ab(Ab &u){  // ���ƹ��캯��ʵ��
    la = u.la;
    lb = u.lb;
}

int Ab::Rw(){  // ����˻�
    return la*lb;
}

int Ab::Ga(){ // ����a
    return la;
}

int Ab::Gb(){  // ����b
    return lb;
}


int main(){

  int c, d;
  cout<<"����2��������"<<endl;
  cout<<"la: ";
  cin>>c;
  cout<<"lb: ";
  cin>>d;

  Ab t(c,d); //���캯��������t��
  cout<<"�������t: "<<endl;
  cout<<"t��Ԫ�أ�"<<t.Ga()<<"  "<<t.Gb()<<endl;
  cout<<"t�к���gw�Ľ��:  "<<t.Rw()<<endl;

  return 0;
}
