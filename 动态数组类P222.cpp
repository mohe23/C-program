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
    void Show(){cout<<"点坐标 ("<<x<<","<<y<<")"<<endl;}
private:
    int x, y;
};

class ArrayOfPoints{ // 动态数组类。
public:
    ArrayOfPoints(int siz):siz(siz){
        points = new Point[siz];
    }
    ~ArrayOfPoints(){
       cout<<"Delet......"<<endl;
       delete [] points;
    }
    Point &element(int index){
     assert(index>=0 && index<siz); //若数组下标越界，则跳出循环。
     return points[index];
    }
private:
    Point*points;
    int siz;
};


int main(){
   int coun;
   cout<<"请输入数组数量：";
   cin>>coun;
   ArrayOfPoints points(coun);//创建对象数组。
   points.element(0).Move(34,90);//访问数组元素的成员。
   points.element(1).Move(4,20);
    //points.element(2).Move(14,20);
   points.element(0).Show();
   points.element(1).Show();
   return 0;
}
