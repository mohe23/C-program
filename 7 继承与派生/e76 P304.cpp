#include<iostream>
#include<string>
using namespace std;

class Mammal{
public:
    Mammal(string na);//构造函数。
    ~Mammal(){cout<<"析构M"<<endl;}
    void show(){cout<<"this is "<<name<<endl;}
private:
    string name;
};

Mammal::Mammal(string na){
     name = na;
     cout<<"构造M"<<endl;
}

class Dog:public Mammal{
public:
    Dog(string na):Mammal(na){cout<<"构造D"<<endl;}
    ~Dog(){cout<<"析构D"<<endl;}
    void eat(){cout<<"Dog "<<"is eating!"<<endl;}

};

int main(){
   Dog d("puppy");//构造时，先M后D。析构时：先D后M。
   d.show();
   d.eat();

return 0;
}
