#include<iostream>
using namespace std;

class Shape{
public:
    Shape(float x0):x(x0){cout<<"����shape!"<<endl;}
    float getX(){return x;}

private:
    float x;

};


class Rectangle:public Shape{
public:
    Rectangle(float x0, float y0):Shape(x0),y(y0){cout<<"����Rec"<<endl;}
    float getY(){return y;}
    float getArea(){
       return getX()*y;
    }
private:
    float y;

};


class Circle:public Shape{
public://���û��public�ؼ��֣���ôĬ��Ϊ��˽�г�Ա����
    Circle(float x0):Shape(x0){cout<<"����circle"<<endl;}
    float getArea(){
         return 3.14*getX()*getX();
    }
};

class Square:public Rectangle{

};


int main(){
   Rectangle rect(1,3);
   Circle cir(2);
   cout<<"area: "<<rect.getArea()<<endl;
   cout<<"x: "<<rect.getX()<<","<<"y: "<<rect.getY()<<endl;
   cout<<"area of c: "<<cir.getArea()<<endl;

return 0;
}
