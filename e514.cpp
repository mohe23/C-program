#include<iostream>
using namespace std;

class Car;
class Boat{
public:
    Boat(float f1){
        weight = f1;
    }
    friend float getTo(Boat &b1, Car &c1);
private:
    float weight;
};

class Car{
public:
    Car(float f2){
        weight = f2;
    }
    friend float getTo(Boat &b1, Car &c1);
private:
    float weight;
};


float getTo(Boat &b1, Car &c1){
       float su;
       su = b1.weight + c1.weight;
       return su;
}


int main(){

   Boat b2(34.6);
   Car c2(45.9);
   float sw = getTo(b2, c2);

   cout<<"sw:  "<<sw<<endl;
   return 0;
}
