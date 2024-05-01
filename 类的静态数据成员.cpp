#include<iostream>
using namespace std;


class Point{
public:
    Point(int x=0, int y=0):x(x),y(y){//在构造函数中对点的数量累加，所有对象共同维护同一个coun。
        coun++;
    }

    Point(Point &p){ // 复制构造函数。每当复制1个点，点数也加1。
        x = p.x;
        y = p.y;
        coun++;
    }

    ~Point(){ // 析构函数，每析构1个点，点数减一。
      coun--;
    }

    int getX(){ return x;}

    int getY(){ return y;}

    void showCount(){
          cout<<"点数： "<<coun<<endl;
    }

    void showPoint(){
        cout<<"( "<<x<<","<<y<<" )"<<endl;
    }

private:
    int x, y;
    static int coun; // 静态数据成员声明，要加上关键词static, 用于记录点的个数。
};

int Point::coun = 0;  //静态数据成员定义和初始化，使用类名限定。格式为“类名：：标识符”

int main(){

  Point a(4, 5);  // coun加一。
  a.showPoint();
  a.showCount();
  Point b(a);
  b.showPoint();
  b.showCount();
  a.showCount();
  Point c(3,6);
  c.showPoint();
  c.showCount();
  a.showCount();
  b.showCount();
}
