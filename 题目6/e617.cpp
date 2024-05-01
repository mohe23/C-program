#include<iostream>
using namespace std;
/*
int main(){
    int *p;
    //int a = 9;
    *p = 9;
    cout<<"p: "<<*p<<endl;

return 0;
}
*/

int fn1(){
  int*p = new int(5);
  //cout<<*p<<endl;
  return *p;
}
//改为:

int *fn2(){
   int *p = new int(5);
   return p;
}

int main(){

 // int a = fn1();//没有释放*p所拥有的内存空间。
  //cout<<"a: "<<a<<endl;
  //改为：
  int*a = fn2();
  cout<<"*a: "<<*a<<endl;
  delete a;//释放new出来的内存空间。
return 0;
}


//e619:
long *func(int para);
long A:: *func(int para);
