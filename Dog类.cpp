#include<iostream>
using namespace std;

class Dog{
   public:
      Dog(int a,float w,string c,char g);//���캯����
      Dog(Dog &d);//���ƹ��캯����
      int getAge();//����1��С�������䡣
      float getWeight();//����С�������ء�
      string getColor();//����С������ɫ��
      char getSex();//����С�����Ա�

   private:
      int age;//С�������䡣
      float weight;//С�������ء�
      string color;//С����������ɫ��
      char  sex;//С���Ĺ�ĸ��"F"-ĸ������M��-����

};


Dog::Dog(int a,float w,string c,char g){//���캯����

    age=a;
    weight=w;
    color=c;
    sex=g;
}


Dog::Dog(Dog&d){//���ƹ��캯����

   age=d.age;
   weight=d.weight;
   color=d.color;
   sex=d.sex;
}


int Dog::getAge(){

  return age;
}

float Dog::getWeight(){

   return weight;
}

string Dog::getColor(){

   return color;
}

char Dog::getSex(){

   return sex;
}


int main(){

  int a;
  float b;
  string s;
  char g;

 cout<<"����С�������䣬���أ�ëɫ����ĸ��"<<endl;
  cin>>a>>b>>s>>g;

  Dog dog(a,b,s,g);
  Dog dog2=dog;

   cout<<"С�������䣺"<<dog.getAge()<<endl;
   cout<<"С��������: "<<dog.getWeight()<<endl;
   cout<<"С����ëɫ��"<<dog.getColor()<<endl;
   cout<<"С�����Ա�"<<dog.getSex()<<endl;

   cout<<"С�������䣺"<<dog2.getAge()<<endl;
   cout<<"С��������: "<<dog2.getWeight()<<endl;
   cout<<"С����ëɫ��"<<dog2.getColor()<<endl;
   cout<<"С�����Ա�"<<dog2.getSex()<<endl;

   return 0;
}
