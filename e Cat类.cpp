#include<iostream>
using namespace std;

class Cat{
public:
    Cat(char i){ // 构造函数。
         name = i;
         num++;
    }

    Cat(Cat &c){  //复制构造函数。
        name = c.name;
        num++;
    }

    static int getNum(){ //静态成员函数。
         return num;
    }

    ~Cat(){ num--;}

private:
    char name;
    static int num; //静态数据成员。
};

int Cat::num = 0; //在类外对静态数据成员说明以及初始化。

int main(){
   int n1;
   Cat c1('C');
   Cat c2('d');
   Cat c3 = c2;
   n1 = Cat::getNum();

   cout<<"num: "<<n1<<endl;

   return 0;
}
