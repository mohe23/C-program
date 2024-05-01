#include<iostream>
#include<cmath>
using namespace std;

class Point{
   public:
       Point(int xx,int yy);//���캯����
       Point(Point &p);//���ƹ��캯����
       int getX(){ return x;}
       int getY(){ return y;}

   private:
       int x;//���x���ꡣ
       int y;//���y���ꡣ

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



class Line{   //�����ϡ�
    public:
       Line(Point xp1,Point xp2);//���캯����
       Line(Line &l);            //���ƹ��캯����
       double getLen() {return len;}

    private:
        Point p1,p2;//Point��Ķ���
        double len;

};



Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2){//�����Ĺ��캯����
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
    Point myp1(1,1),myp2(4,5);//����Point��Ķ���
    Line line(myp1,myp2);//����Line��Ķ���
    Line line2=line;//���ø��ƹ��캯������һ���¶���
    cout<<"The length of the line is: ";
    cout<<line.getLen()<<endl;
    cout<<"The length of the line2 is: ";
    cout<<line2.getLen()<<endl;

    return 0;
}
