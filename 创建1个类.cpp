#include<iostream>
using namespace std;

class Rectangle{
   public:
       Rectangle(int a,int b);//构造函数。
       Rectangle(Rectangle &p);//复制构造函数。
       int  area();
       int  length();
       int GetX();
       int GetY();

   private:
      int lenga;//长。
      int lengb;//宽。
};


Rectangle::Rectangle(int a,int b)//初始化类的一个对象。
{
  lenga=a;
  lengb=b;
}


Rectangle::Rectangle(Rectangle &p)//复制构造函数。
{
  lenga=p.lenga;
  lengb=p.lengb;

}



int Rectangle::area()//计算这个矩形的面积。
{
    int c;
    c= lenga*lengb;//计算矩形的面积。

    return c;

}


int Rectangle::length()//计算矩形的周长。
{
   int leng;
   leng=(lenga+lengb)*2;
   return leng;
}


int Rectangle::GetX()//输出矩形的长。
{
    int x1=lenga;

    return x1;
}


int Rectangle::GetY()//输出矩形的宽
{
  int y1;
  y1=lengb;

  return y1;
}


int main()
{
  int a,b;
  cin>>a>>b;
  Rectangle r(a,b);
  Rectangle h=r;

  int d=r.area();
  int e=r.length();

  int d1=h.area();
  int e1=h.length();

  cout<<d<<endl;
  cout<<e<<endl;

  cout<<d1<<endl;
  cout<<e1<<endl;

  cout<<r.GetX()<<endl;
  cout<<r.GetY()<<endl;

  return 0;
}
