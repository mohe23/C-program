#include<iostream>

using namespace std;

int main(){

   int i;
   int *ptr = &i; //取i的地址赋给ptr。‘*’出现在声明语句中，表示声明的是1个指针变量。
   i = 10;
   cout<<"i= "<<i<<endl;
   cout<<"*ptr= "<<*ptr<<endl; //输出指针所指向地址的内容。
   return 0;
}
