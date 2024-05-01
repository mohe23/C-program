#include<iostream>
using namespace std;

class Mannal{
public:
    virtual void speak();
};

void Mannal::speak(){
    cout<<"Mannal speak!!"<<endl;
}

class Dog:public Mannal{
public:
    void speak(){
      cout<<"Dog speak!!!"<<endl;
    }
};


int main(){
  Dog d;
  d.speak();

return 0;
}
