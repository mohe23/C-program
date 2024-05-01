#include<iostream>
using namespace std;

class Dog{
   public:
      Dog(int a,float w,string c,char g);//构造函数。
      Dog(Dog &d);//复制构造函数。
      int getAge();//返回1个小狗的年龄。
      float getWeight();//返回小狗的体重。
      string getColor();//返回小狗的颜色。
      char getSex();//返回小狗的性别。

   private:
      int age;//小狗的年龄。
      float weight;//小狗的体重。
      string color;//小狗的身体颜色。
      char  sex;//小狗的公母，"F"-母狗，“M”-公狗

};


Dog::Dog(int a,float w,string c,char g){//构造函数。

    age=a;
    weight=w;
    color=c;
    sex=g;
}


Dog::Dog(Dog&d){//复制构造函数。

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

 cout<<"输入小狗的年龄，体重，毛色，公母："<<endl;
  cin>>a>>b>>s>>g;

  Dog dog(a,b,s,g);
  Dog dog2=dog;

   cout<<"小狗的年龄："<<dog.getAge()<<endl;
   cout<<"小狗的体重: "<<dog.getWeight()<<endl;
   cout<<"小狗的毛色："<<dog.getColor()<<endl;
   cout<<"小狗的性别："<<dog.getSex()<<endl;

   cout<<"小狗的年龄："<<dog2.getAge()<<endl;
   cout<<"小狗的体重: "<<dog2.getWeight()<<endl;
   cout<<"小狗的毛色："<<dog2.getColor()<<endl;
   cout<<"小狗的性别："<<dog2.getSex()<<endl;

   return 0;
}
