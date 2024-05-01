#include<iostream>
using namespace std;


class clo{
public:
    clo();
    void setTime(int nh, int nm, int ns);
    void showTime();
private:
    int hour,minute,second;
};


clo::clo(){
      hour = 0;
    minute = 0;
    second = 0;
}


void clo::setTime(int nh, int nm, int ns){
      hour = nh;
      minute = nm;
      second = ns;
}


void clo::showTime(){
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}

clo gl;

int main(){
     gl.showTime();
     gl.setTime(8,30,30);
     clo mc(gl);
     mc.showTime();

  return 0;
}
