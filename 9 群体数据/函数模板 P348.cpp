#include<iostream>
using namespace std;

template<typename T>
T abss(T x){
     return x<0?-x:x;
}

int main(){
     int n=-5;
     double d= -5.5;
     cout<<abss(n)<<endl;//TΪint��
     cout<<abss(d)<<endl;//TΪint�͡�
return 0;
}
