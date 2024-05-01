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
    ArrayOfPoints(const ArrayOfPoints&v);//���ƹ��캯����
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

ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints&v){ //��д�˸��ƹ��캯��������2������ӵ���˶����Ĵ洢�ռ䣬������1�ı������ݣ�����2�����Ļ���1�ı�ǰ
    siz = v.siz; //�����ֵ                                      //�����ݡ�
    points = new Point[siz];
    for(int i=0;i<siz;i++)
        points[i] = v.points[i]; //�����ֵ��ʵ����ơ�
}


int main(){
  int coun;
  cout<<"������coun�� ";
  cin>>coun;
  ArrayOfPoints pointsa1(coun); //�����������顣���õ����в����Ĺ��캯����
  pointsa1.element(0).Move(5,10);
  pointsa1.element(1).Move(15,20);
  ArrayOfPoints pointsa2 = pointsa1; //�����������鸱����
  cout<<"Copy of pointsa1:"<<endl;
  cout<<"1: "<<pointsa2.element(0).getX()<<","<<pointsa2.element(0).getY()<<endl;
  cout<<"2: "<<pointsa2.element(1).getX()<<","<<pointsa2.element(1).getY()<<endl;
//ǳ���ƣ�����2������ָ��Ķ���ͬһ���ڴ�ռ䣬����ʱ����Ը��ڴ�ռ����2���ͷŵ������д���������Ҫ��д���ƹ��캯����
  pointsa1.element(0).Move(25,30);
  pointsa1.element(1).Move(35,40);
  cout<<"After moving pointsa1: "<<endl;
  cout<<"1: "<<pointsa2.element(0).getX()<<","<<pointsa2.element(0).getY()<<endl;
  cout<<"2: "<<pointsa2.element(1).getX()<<","<<pointsa2.element(1).getY()<<endl;

return 0;
}
