#include<iostream>
#include<cmath>
using namespace std;


int ifodd(int num){ // 判断num是否是质数。返回值是1，表示是质数；否则，表示不是质数。
    int a, t = 2, flag = 1;
    while((t<num)&&flag){
        a = num % t;
        if(a == 0)
            flag = 0; // 表示该数不是质数。
        else
            t++; //

    }
  return flag;
}


int prime(int i){
     int j, k, flag=1;
      k = sqrt(i);
      for(j=2;j<=k;j++){
        if(i%j == 0){
            flag = 0;
            break;
        }
      }
    return flag;
}


int main(){

  int x, y;
  cout<<"请输入待判断的数字(请不要输入数字0)： ";
  cin>>x;
  cout<<endl;
  y = ifodd(x);

  if(y==1)
    cout<<x<<" 是质数"<<endl;
  else
    cout<<x<<" 不是质数"<<endl;

 cout<<sqrt(9)<<endl;
  return 0;
}
