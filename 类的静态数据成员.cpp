#include<iostream>
using namespace std;


class Point{
public:
    Point(int x=0, int y=0):x(x),y(y){//�ڹ��캯���жԵ�������ۼӣ����ж���ͬά��ͬһ��coun��
        coun++;
    }

    Point(Point &p){ // ���ƹ��캯����ÿ������1���㣬����Ҳ��1��
        x = p.x;
        y = p.y;
        coun++;
    }

    ~Point(){ // ����������ÿ����1���㣬������һ��
      coun--;
    }

    int getX(){ return x;}

    int getY(){ return y;}

    void showCount(){
          cout<<"������ "<<coun<<endl;
    }

    void showPoint(){
        cout<<"( "<<x<<","<<y<<" )"<<endl;
    }

private:
    int x, y;
    static int coun; // ��̬���ݳ�Ա������Ҫ���Ϲؼ���static, ���ڼ�¼��ĸ�����
};

int Point::coun = 0;  //��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�����ʽΪ������������ʶ����

int main(){

  Point a(4, 5);  // coun��һ��
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
