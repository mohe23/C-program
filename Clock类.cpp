#include"Clock类.h"
#include<iostream>

using namespace std;


/*Clock::Clock(int newH, int newM, int newS){ //在类外实现函数体。
      Hour = newH;
    Minute = newM;
    Second = newS;

}*/


void Clock::setTime(int newH, int newM, int newS){
      Hour = newH;
    Minute = newM;
    Second = newS;
}


void Clock::setTime(){

  cout<<Hour<<"::"<<Minute<<"::"<<Second<<endl;
}


int main(){
     Clock c2;//(//12,23,45);
     //cout<<c2.Hour<<endl;
      c2.showTime();
     return 0;
}
