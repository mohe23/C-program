#include<iostream>

using namespace std;

void fn1(){

  static int n = 12;  //��������1�γ��֣���ʾ��ʼ���ñ�������2���Լ���Ρ�ִ�С�����䣬�൱�ڡ���ִ�С�����䡣
  n++;
  cout<<"n: "<<n<<endl;
}


int main(){

   int i;

   for(i=0;i<10;i++)
       fn1();

   return 0;
}
