#include<iostream>
using namespace std;

class Shape{
public:
    virtual float getArea()=0;//纯虚函数。
    virtual float getPerim()=0;
};


class Rectangle:public Shape{
public:
    Rectangle(float x0=0,float y0=0):x(x0),y(y0){cout<<"构造Rect!!"<<endl;}
    float getArea(){
       return x*y;
    }
    float getPerim(){
        return 2*(x+y);
     }
     ~Rectangle(){cout<<"析构Rect!!"<<endl;}
private:
    float x,y;
};

class Circle:public Shape{
public:
    Circle(int val=0):value(val){
       cout<<"构造Cir!!"<<endl;
    }
    float getArea(){
       return 3.14*value*value;
    }
    float getPerim(){
       return 2*3.14*value;
    }
    ~Circle(){cout<<"析构Cir!!"<<endl;}
private:
    int value;
};

void func(Shape&s){
   cout<<s.getArea()<<" "<<s.getPerim()<<endl;
}

int main(){
  Shape*sp;
  sp = new Rectangle(4,5);
  cout<<sp->getArea()<<"  "<<sp->getPerim()<<endl;
  delete sp;

  sp = new Circle(6);
  cout<<sp->getArea()<<"  "<<sp->getPerim()<<endl;
  delete sp;


  //Rectangle r(3,4);
  //Circle c(5);
  //cout<<r.getArea()<<"  "<<r.getPerim()<<endl;
  //cout<<c.getArea()<<"  "<<c.getPerim()<<endl;
  // func(r);
   //func(c);
return 0;
}
