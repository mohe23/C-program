#include<iostream>
using namespace std;

union Mark{
     char grade; //等级制的成绩。
     bool pass;  //只记是否通过。
     int percent; //百分制成绩。
};


int main(){
   Mark m;
  // m.grade = 'A';
   m.pass = true;
   //m.percent = 89;

  // cout<<m.grade<<endl;
   cout<<m.pass<<endl;
   //cout<<m.percent<<endl;

return 0;
}
