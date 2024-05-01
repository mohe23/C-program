#include<iostream>
#include<cmath>
using namespace std;

class Point{
   public:
       Point(int xx,int yy);//构造函数。
       Point(Point &p);//复制构造函数。
       int getX(){ return x;}
       int getY(){ return y;}

   private:
       int x;//点的x坐标。
       int y;//点的y坐标。

};

Point::Point(int xx,int yy)
{
   x=xx;
   y=yy;
}


Point::Point(Point &p)
{
    x=p.x;
    y=p.y;
    cout<<"Calling the copy constructor of the Point"<<endl;
}



class Line{   //类的组合。
    public:
       Line(Point xp1,Point xp2);//构造函数。
       Line(Line &l);            //复制构造函数。
       double getLen() {return len;}

    private:
        Point p1,p2;//Point类的对象。
        double len;

};



Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2){//组合类的构造函数。
      cout<<"Calling constructor of Line"<<endl;
      double x=static_cast<double>(p1.getX()-p2.getX());
      double y=static_cast<double>(p1.getY()-p2.getY());
      len=sqrt(x*x+y*y);
}


Line::Line(Line &l):p1(l.p1),p2(l.p2){
       cout<<"Calling the copy constructor of Line"<<endl;
       len=l.len;
}



int main()
{
    Point myp1(1,1),myp2(4,5);//建立Point类的对象。
    Line line(myp1,myp2);//建立Line类的对象。
    Line line2=line;//利用复制构造函数建立一个新对象。
    cout<<"The length of the line is: ";
    cout<<line.getLen()<<endl;
    cout<<"The length of the line2 is: ";
    cout<<line2.getLen()<<endl;

    return 0;
}
