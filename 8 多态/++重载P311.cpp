#include<iostream>
using namespace std;

class Clock{
public:
    Clock(int hour=0, int minute=0, int second=0);//���캯����
    void display() const;
    Clock& operator++();//ǰ��++���ء�
    Clock operator++(int);//���õ�Ŀ�������
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

Clock& Clock::operator++(){//&��ʾ�ǡ����á���
    second++;
    if(second>=60){
        second-=60;
        minute++;
        if(minute>=60){
            minute-=60;
            hour = (hour+1)%24;//ȡģ���㡣
        }
    }
return *this;//this��1��ָ�룬ָ��ǰ�����ָ�롣
}

Clock Clock::operator++(int){//���õ�Ŀ�������
    Clock old = *this;
    ++(*this);//����ǰ���������
    return old;

}


int main(){
  Clock myclock(23,59,59);
  myclock.display();
  cout<<"���ã�";
  (myclock++).display();//���ã����Ƕ������display(),Ȼ��ִ�м�1��
  cout<<"ǰ�ã�";
  (++myclock).display();//ǰ�ã���ʾ�����1�����Ƕ���ִ��display��
 return 0;
}
