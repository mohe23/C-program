#include<iostream>
#include<string>
using namespace std;

class Mammal{
public:
    Mammal(string na);//���캯����
    ~Mammal(){cout<<"����M"<<endl;}
    void show(){cout<<"this is "<<name<<endl;}
private:
    string name;
};

Mammal::Mammal(string na){
     name = na;
     cout<<"����M"<<endl;
}

class Dog:public Mammal{
public:
    Dog(string na):Mammal(na){cout<<"����D"<<endl;}
    ~Dog(){cout<<"����D"<<endl;}
    void eat(){cout<<"Dog "<<"is eating!"<<endl;}

};

int main(){
   Dog d("puppy");//����ʱ����M��D������ʱ����D��M��
   d.show();
   d.eat();

return 0;
}
