#include<iostream>
#include<cmath>
using namespace std;


int ifodd(int num){ // �ж�num�Ƿ�������������ֵ��1����ʾ�����������򣬱�ʾ����������
    int a, t = 2, flag = 1;
    while((t<num)&&flag){
        a = num % t;
        if(a == 0)
            flag = 0; // ��ʾ��������������
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
  cout<<"��������жϵ�����(�벻Ҫ��������0)�� ";
  cin>>x;
  cout<<endl;
  y = ifodd(x);

  if(y==1)
    cout<<x<<" ������"<<endl;
  else
    cout<<x<<" ��������"<<endl;

 cout<<sqrt(9)<<endl;
  return 0;
}
