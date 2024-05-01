#include<iostream>
using namespace std;

class Tree{

  public:
      Tree(float a1,string n1);//构造函数
      Tree(){//构造函数。
         ages=3.5;
         name="桂树";
      }
      Tree(Tree &t);//复制构造函数。
      ~Tree(){};//析构函数。
      void grow(int years);//使得ages=ages+years。
      void age();//打印ages。
      void show();//打印类成员。

  private:
    float ages;//树龄
    string name;//树名。
};

Tree::Tree(float a1,string n1){

    ages=a1;
    name=n1;
}

Tree::Tree(Tree &t){

    ages=t.ages;
    name=t.name;
}


void Tree::grow(int years){

    ages=ages+years;

}


void Tree::age(){

cout<<"树龄："<<ages<<endl;
}

void Tree::show(){

  cout<<"树名："<<name<<endl;
  cout<<"树龄："<<ages<<endl<<endl;

}
int main(){

  Tree t1;
  float f1;
  string s1;
  cout<<"输入树龄，树名:"<<endl;
  cin>>f1>>s1;
  Tree t2(f1,s1);

  t1.age();
  t2.age();
  cout<<endl;
  t1.grow(2);
  t2.grow(5);
  t1.show();
  t2.show();

  return 0;
}
