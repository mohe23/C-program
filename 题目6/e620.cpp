#include<iostream>
using namespace std;

class SimpleCircle{
public:
    SimpleCircle(int r);//构造函数。
    SimpleCircle(SimpleCircle &s);//复制构造函数。
    ~SimpleCircle(){cout<<"析构！！"<<endl;}//析构函数。
    int getRadius(){return *Radius;}
    float round();//计算圆周长。
    float area();//计算圆面积。

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
    SimpleCircle s(9);//创建了一个SimpleCircle类实例。
    cout<<s.getRadius()<<endl;
    cout<<s.area()<<endl;
    cout<<s.round()<<endl;
    //cout<<*a<<endl;

return 0;
}
