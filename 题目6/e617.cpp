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
//��Ϊ:

int *fn2(){
   int *p = new int(5);
   return p;
}

int main(){

 // int a = fn1();//û���ͷ�*p��ӵ�е��ڴ�ռ䡣
  //cout<<"a: "<<a<<endl;
  //��Ϊ��
  int*a = fn2();
  cout<<"*a: "<<*a<<endl;
  delete a;//�ͷ�new�������ڴ�ռ䡣
return 0;
}


//e619:
long *func(int para);
long A:: *func(int para);
