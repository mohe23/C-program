#include<iostream>
using namespace std;

int x=5, y=9;

void func(){
     int y=10;
     cout<<"x: "<<x<<"  y: "<<y<<endl;

}


int main(){
   cout<<"1:   "<<"x: "<<x<<"  y: "<<y<<endl;
   func();
   cout<<"2:   "<<"x: "<<x<<"  y: "<<y<<endl;
}
