#include<iostream>
using namespace std;

class base{
public:
    virtual ~base();
};

base::~base(){
   cout<<"析构 base!"<<endl;
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
  cout<<"析构derive!"<<endl;
  delete p;
}

void fun(base*b){
  delete b;
}


int main(){
  base*b = new Derived();//当基类的析构函数没有声明为虚析构函数，派生类的析构函数没有被执行，这样p所占用的内存就没有被释放。
  fun(b);   //将基类的析构函数声明为虚析构函数，就解决了这个问题了
return 0;
}
