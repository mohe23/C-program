#include<iostream>
using namespace std;

union Mark{
     char grade; //�ȼ��Ƶĳɼ���
     bool pass;  //ֻ���Ƿ�ͨ����
     int percent; //�ٷ��Ƴɼ���
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
