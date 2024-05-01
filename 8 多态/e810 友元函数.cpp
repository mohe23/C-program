#include<iostream>
using namespace std;

class Point{
public:
    Point(int x0=0,int y0=0):x(x0),y(y0){};
    friend Point operator+(const Point&p1,const Point&p2);
    void show(){cout<<x<<","<<y<<endl;}
private:
    int x,y;
};

Point operator+(const Point&p1,const Point&p2){
       return Point(p1.x+p2.x, p1.y+p2.y);
}


int main(){
     Point p1(2,3),p2(3,4),p3;
     p3 = p1+p2;
     p3.show();

return 0;
}
