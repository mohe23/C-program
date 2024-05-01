#include<iostream>

using namespace std;

void fn1(){

  static int n = 12;  //这条语句第1次出现，表示初始化该变量，第2次以及多次“执行”该语句，相当于“不执行”该语句。
  n++;
  cout<<"n: "<<n<<endl;
}


int main(){

   int i;

   for(i=0;i<10;i++)
       fn1();

   return 0;
}
