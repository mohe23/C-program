#include<iostream>

using namespace std;

int main(){

   int i;
   int *ptr = &i; //ȡi�ĵ�ַ����ptr����*����������������У���ʾ��������1��ָ�������
   i = 10;
   cout<<"i= "<<i<<endl;
   cout<<"*ptr= "<<*ptr<<endl; //���ָ����ָ���ַ�����ݡ�
   return 0;
}
