#include<iostream>
using namespace std;

class Tree{

  public:
      Tree(float a1,string n1);//���캯��
      Tree(){//���캯����
         ages=3.5;
         name="����";
      }
      Tree(Tree &t);//���ƹ��캯����
      ~Tree(){};//����������
      void grow(int years);//ʹ��ages=ages+years��
      void age();//��ӡages��
      void show();//��ӡ���Ա��

  private:
    float ages;//����
    string name;//������
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

cout<<"���䣺"<<ages<<endl;
}

void Tree::show(){

  cout<<"������"<<name<<endl;
  cout<<"���䣺"<<ages<<endl<<endl;

}
int main(){

  Tree t1;
  float f1;
  string s1;
  cout<<"�������䣬����:"<<endl;
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
