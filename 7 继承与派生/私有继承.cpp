#include<iostream>
using namespace std;

class Point{
public:
    void initPoint(float x=0,float y=0){this->x = x;this->y = y;}
    void moves(float offx, float offy){x+=offx; y+=offy;}
    float getX() const {return x;}
    float getY() const {return y;}
private:
    float x,y;
};

class Rectangle:private Point{
public:
    void initRectangle(float x, float y, float w, float h){
          initPoint(x,y);//调用基类的公有成员函数。
          this->h = h;
          this->w = w;

    }
    void moves(float offx, float offy){Point::moves(offx,offy);}//定义同名函数，
    float getX() const {return Point::getX();}
    float getY() const {return Point::getY();}
    float getH() const {return h;}
    float getW() const {return w;}
private:
    float h,w;
};


int main(){
   Rectangle rect;
  rect.initRectangle(3,2,20,30);
  rect.moves(2,3);
  cout<<rect.getX()<<","<<rect.getY()<<","<<rect.getW()<<","<<rect.getH()<<endl;

return 0;
}
