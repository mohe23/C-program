#include<iostream>
using namespace std;

class Complexs{

   public:
      Complexs(float f1,float f2);//���캯����
      Complexs(float f1);//ֻ��ʵ�����֡�
      Complexs(){
         real=0;
         xu=0;
      }

      Complexs(Complexs &p);//���ƹ��캯����
      ~Complexs(){
        cout<<"������������"<<endl;
      };//����������
      float getReal(){//���ظ�����ʵ����
         return real;
      }
      float getXu(){//���ظ������鲿��
         return xu;
      }
      void setC(float f1,float f2){

           real=f1;
           xu=f2;
      }
      void add(Complexs c2);//���ö�����c2��Ӻ󣬸�ֵ���ö���
      void show();//��ӡ�ø�����

   private:
      float real;//ʵ�����֡�
      float xu;//�������֡�
};


Complexs::Complexs(float f1,float f2){

    real=f1;
    xu=f2;
}


Complexs::Complexs(float f1){

     real=f1;
     xu=0;
}



Complexs::Complexs(Complexs &p){

    real=p.real;
    xu=p.xu;
}


void Complexs::add(Complexs c){

   float f3,f4;
   f3=c.getReal();
   f4=c.getXu();

   real=real+f3;
   xu=xu+f4;
}


void Complexs::show(){

  cout<<real<<"+"<<xu<<"i"<<endl<<endl;
}


int main(){

  Complexs c[2];
  //c[0]=c1;

  //Complexs c1=4.5;
  Complexs c2(3,4);
  Complexs c3(4,4);

  c[0]=c2;
  c[1]=c3;

  c[0].show();
  c[1].show();

  c2.setC(56,34);

  c[0].show();
  c[1].show();

  //cout<<c2.real<<endl;
  //c1.add(c2);
//  c1.show();


  return 0;
}
