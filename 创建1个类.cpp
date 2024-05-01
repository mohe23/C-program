#include<iostream>
using namespace std;

class Rectangle{
   public:
       Rectangle(int a,int b);//���캯����
       Rectangle(Rectangle &p);//���ƹ��캯����
       int  area();
       int  length();
       int GetX();
       int GetY();

   private:
      int lenga;//����
      int lengb;//��
};


Rectangle::Rectangle(int a,int b)//��ʼ�����һ������
{
  lenga=a;
  lengb=b;
}


Rectangle::Rectangle(Rectangle &p)//���ƹ��캯����
{
  lenga=p.lenga;
  lengb=p.lengb;

}



int Rectangle::area()//����������ε������
{
    int c;
    c= lenga*lengb;//������ε������

    return c;

}


int Rectangle::length()//������ε��ܳ���
{
   int leng;
   leng=(lenga+lengb)*2;
   return leng;
}


int Rectangle::GetX()//������εĳ���
{
    int x1=lenga;

    return x1;
}


int Rectangle::GetY()//������εĿ�
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
