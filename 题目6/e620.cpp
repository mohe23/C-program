#include<iostream>
using namespace std;

class SimpleCircle{
public:
    SimpleCircle(int r);//���캯����
    SimpleCircle(SimpleCircle &s);//���ƹ��캯����
    ~SimpleCircle(){cout<<"��������"<<endl;}//����������
    int getRadius(){return *Radius;}
    float round();//����Բ�ܳ���
    float area();//����Բ�����

private:
    int *Radius;
};


SimpleCircle::SimpleCircle(int r){
      Radius = new int(r);
}

SimpleCircle::SimpleCircle(SimpleCircle &s){
      //Radius = s.Radius;
      int val = s.getRadius();
      Radius = new int(val);
}

float SimpleCircle::round(){
    float r1;
    int r2;
    r2 = *Radius;
    r1 = 2*3.14*r2;
return r1;
}

float SimpleCircle::area(){
     float a1;
     int a2;
     a2 = *Radius;
     a1 = 3.14*a2*a2;
return a1;
}

int main(){
    //int t = 9;
    //int *a = &t;
    SimpleCircle s(9);//������һ��SimpleCircle��ʵ����
    cout<<s.getRadius()<<endl;
    cout<<s.area()<<endl;
    cout<<s.round()<<endl;
    //cout<<*a<<endl;

return 0;
}
