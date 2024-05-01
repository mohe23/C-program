#include<iostream>
#include<cassert>
using namespace std;

class Point{
public:
    Point():x(0),y(0){
      cout<<"De con call!"<<endl;
    }
    Point(int x, int y):x(x),y(y){
      cout<<"con call!"<<endl;
    }
    ~Point(){cout<<"Des call!!"<<endl;}
    int getX() const {return x;}
    int getY() const {return y;}
    void Move(int nx, int ny){
           x = nx;
           y = ny;
    }
    void Show(){cout<<"������ ("<<x<<","<<y<<")"<<endl;}
private:
    int x, y;
};

class ArrayOfPoints{ // ��̬�����ࡣ
public:
    ArrayOfPoints(int siz):siz(siz){
        points = new Point[siz];
    }
    ~ArrayOfPoints(){
       cout<<"Delet......"<<endl;
       delete [] points;
    }
    Point &element(int index){
     assert(index>=0 && index<siz); //�������±�Խ�磬������ѭ����
     return points[index];
    }
private:
    Point*points;
    int siz;
};


int main(){
   int coun;
   cout<<"����������������";
   cin>>coun;
   ArrayOfPoints points(coun);//�����������顣
   points.element(0).Move(34,90);//��������Ԫ�صĳ�Ա��
   points.element(1).Move(4,20);
    //points.element(2).Move(14,20);
   points.element(0).Show();
   points.element(1).Show();
   return 0;
}
