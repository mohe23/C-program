#include<iostream>
using namespace std;

class Point{
public:
    Point(int x0=0,int y0=0):x(x0),y(y0){cout<<"构造Point"<<x<<","<<y<<endl;};//构造函数
    ~Point(){cout<<"析构Point"<<x<<","<<y<<endl;}
    Point operator++();//前置重载。
    Point operator++(int);//后置重载。
    Point operator--();//前置重载。
    Point operator--(int);//后置。
    void show(){cout<<"("<<x<<","<<y<<")"<<endl;}
private:
    int x,y;
};


Point Point::operator++(){
    //return Point(x+1,y+1);
    x+=1;
    y+=1;
    return *this;
}

Point Point::operator++(int){
   Point p = *this;
   ++(*this);//调用前置。
   return p;
}

Point Point::operator--(){
   //return Point(x-1,y-1);
   x-=1;
   y-=1;
   return *this;
}

Point Point::operator--(int){

    Point p = *this;
    --(*this);//调用前置
    return p;
}


int main(){
   Point p1(4,5);
   //(p1++).show();//这个显示的是原始值
   //(++p1).show();//这个显示的是加之后的值。
   //(p1--).show();//这个显示的也是原始值。
   //(--p1).show();//这个显示的是运算之后的值。
   p1++;
   p1.show();
   ++p1;
   p1.show();
   p1--;
   p1.show();
   --p1;
   p1.show();

return 0;
}
