#include<iostream>
using namespace std;

class Ab{  //创建1个类
public:
    Ab(int a, int b);//构造函数
    Ab(Ab &u); //复制构造函数
    int Rw();  //a*b
    int Ga();  //返回a
    int Gb();  //返回b

private:
    int la, lb;  //2个元素
};


Ab::Ab(int a, int b){  //构造函数实现
    la = a;
    lb = b;
}

Ab::Ab(Ab &u){  // 复制构造函数实现
    la = u.la;
    lb = u.lb;
}

int Ab::Rw(){  // 计算乘积
    return la*lb;
}

int Ab::Ga(){ // 返回a
    return la;
}

int Ab::Gb(){  // 返回b
    return lb;
}


int main(){

  int c, d;
  cout<<"输入2个整数："<<endl;
  cout<<"la: ";
  cin>>c;
  cout<<"lb: ";
  cin>>d;

  Ab t(c,d); //创造函数构造类t。
  cout<<"构造的类t: "<<endl;
  cout<<"t的元素："<<t.Ga()<<"  "<<t.Gb()<<endl;
  cout<<"t中函数gw的结果:  "<<t.Rw()<<endl;

  return 0;
}
