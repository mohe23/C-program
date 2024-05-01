#include<iostream>
using namespace std;

class Clock{
public:
    Clock(int hour=0, int minute=0, int second=0);//构造函数。
    void display() const;
    Clock& operator++();//前置++重载。
    Clock operator++(int);//后置单目运算符。
private:
    int hour,minute,second;
};


Clock::Clock(int hour,int minute,int second){
    if(0<=hour&&hour<24&&minute>=0&&minute<60&&second>=0&&second<60){
          this->hour = hour;
          this->minute = minute;
          this->second = second;
    }
    else
        cout<<"Time error!"<<endl;
}

void Clock::display() const{
   cout<<hour<<":"<<minute<<":"<<second<<endl;
}

Clock& Clock::operator++(){//&表示是“引用”。
    second++;
    if(second>=60){
        second-=60;
        minute++;
        if(minute>=60){
            minute-=60;
            hour = (hour+1)%24;//取模运算。
        }
    }
return *this;//this是1个指针，指向当前对象的指针。
}

Clock Clock::operator++(int){//后置单目运算符。
    Clock old = *this;
    ++(*this);//调用前置运算符。
    return old;

}


int main(){
  Clock myclock(23,59,59);
  myclock.display();
  cout<<"后置：";
  (myclock++).display();//后置：先是对象调用display(),然后执行加1；
  cout<<"前置：";
  (++myclock).display();//前置：显示对象加1，再是对象执行display。
 return 0;
}
