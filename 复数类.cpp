#include<iostream>
using namespace std;

class Complexs{

   public:
      Complexs(float f1,float f2);//构造函数。
      Complexs(float f1);//只有实数部分。
      Complexs(){
         real=0;
         xu=0;
      }

      Complexs(Complexs &p);//复制构造函数。
      ~Complexs(){
        cout<<"调用析构函数"<<endl;
      };//析构函数。
      float getReal(){//返回复数的实部。
         return real;
      }
      float getXu(){//返回复数的虚部。
         return xu;
      }
      void setC(float f1,float f2){

           real=f1;
           xu=f2;
      }
      void add(Complexs c2);//将该对象与c2相加后，赋值给该对象。
      void show();//打印该复数。

   private:
      float real;//实数部分。
      float xu;//虚数部分。
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
