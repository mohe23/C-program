#include<iostream>
#include<cmath>
using namespace std;


class Point{ //Point 类。
public:
    Point(int xx, int yy){ // 构造函数
        x = xx;
        y = yy;
    }

    void showPoint(){
        cout<<"( "<<x<<","<<y<<" )"<<endl;
    }

    friend float dist(Point &p1, Point &p2); //友元函数声明。

private:
    int x, y;

};


float dist(Point &p1, Point &p2){
     int x1, y1;
     float d;
     x1 = p1.x - p2.x;
     y1 = p1.y - p2.y;
     d = sqrt(x1*x1 + y1*y1);

  return d;
}


int main(){
    float fw;
    Point myp1(1,1), myp2(4,5);
    fw = dist(myp1, myp2);

    cout<<fw<<endl;
    return 0;
}
