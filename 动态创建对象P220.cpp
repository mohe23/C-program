#include<iostream>
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


int main(){
    /*
 cout<<"Step 1: "<<endl;
 Point *ptrl= new Point; //��̬�������󣬵���Ĭ�Ϲ��캯����
 delete ptrl;            //ɾ������
 cout<<"Step2: "<<endl;
 ptrl = new Point(1,2);
 delete ptrl;
*/
   Point*ptr = new Point[2];  //��������洢�������顣
   ptr[0].Show();
   ptr[1].Show();
   ptr[0].Move(5,10);
   ptr[1].Move(34,89);
   ptr[0].Show();
   ptr[1].Show();
   cout<<"Deleting..."<<endl;
   delete [] ptr;  //ɾ���������顣

   //ptr[1].Show();
 return 0;
}
