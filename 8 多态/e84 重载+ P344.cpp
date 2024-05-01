#include<iostream>
using namespace std;

class Count{
public:
    Count(int v=0):value(v){};//构造函数。
    Count operator+(const Count&c1);//重载函数。
    void display(){cout<<value<<endl;}
private:
    int value;
};

Count Count::operator+(const Count&c1){
    return Count(value+c1.value);
}


int main(){
    Count c1(3),c2(4),c3;
    c3 = c1+c2;
    c3.display();

return 0;
}
