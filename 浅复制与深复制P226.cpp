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
    ArrayOfPoints(const ArrayOfPoints&v);//复制构造函数。
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

ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints&v){ //编写了复制构造函数，这样2个对象都拥有了独立的存储空间，这样当1改变了内容，但是2保留的还是1改变前
    siz = v.siz; //逐个赋值                                      //的内容。
    points = new Point[siz];
    for(int i=0;i<siz;i++)
        points[i] = v.points[i]; //逐个赋值，实现深复制。
}


int main(){
  int coun;
  cout<<"请输入coun： ";
  cin>>coun;
  ArrayOfPoints pointsa1(coun); //创建对象数组。调用的是有参数的构造函数。
  pointsa1.element(0).Move(5,10);
  pointsa1.element(1).Move(15,20);
  ArrayOfPoints pointsa2 = pointsa1; //创建对象数组副本。
  cout<<"Copy of pointsa1:"<<endl;
  cout<<"1: "<<pointsa2.element(0).getX()<<","<<pointsa2.element(0).getY()<<endl;
  cout<<"2: "<<pointsa2.element(1).getX()<<","<<pointsa2.element(1).getY()<<endl;
//浅复制，导致2个对象指向的都是同一个内存空间，析构时，会对该内存空间进行2次释放导致运行错误，所以需要编写复制构造函数。
  pointsa1.element(0).Move(25,30);
  pointsa1.element(1).Move(35,40);
  cout<<"After moving pointsa1: "<<endl;
  cout<<"1: "<<pointsa2.element(0).getX()<<","<<pointsa2.element(0).getY()<<endl;
  cout<<"2: "<<pointsa2.element(1).getX()<<","<<pointsa2.element(1).getY()<<endl;

return 0;
}
