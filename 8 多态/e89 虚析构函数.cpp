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
   base*b = new deri;//若基类不是虚析构函数，就不能够析构派生类；若基类有虚析构函数，就能够析构基类以及派生类。
   delete b;

return 0;
}
