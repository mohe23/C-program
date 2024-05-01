#include<iostream>
using namespace std;

class Point{
public:
    Point(int x0=0,int y0=0):x(x0),y(y0){cout<<"����Point"<<x<<","<<y<<endl;};//���캯��
    ~Point(){cout<<"����Point"<<x<<","<<y<<endl;}
    Point operator++();//ǰ�����ء�
    Point operator++(int);//�������ء�
    Point operator--();//ǰ�����ء�
    Point operator--(int);//���á�
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
   ++(*this);//����ǰ�á�
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
    --(*this);//����ǰ��
    return p;
}


int main(){
   Point p1(4,5);
   //(p1++).show();//�����ʾ����ԭʼֵ
   //(++p1).show();//�����ʾ���Ǽ�֮���ֵ��
   //(p1--).show();//�����ʾ��Ҳ��ԭʼֵ��
   //(--p1).show();//�����ʾ��������֮���ֵ��
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
