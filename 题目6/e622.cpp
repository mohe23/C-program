#include<iostream>
#include<string>
using namespace std;

//ʹ�õݹ��㷨ʵ���ַ����ĵ��á�

string Reverse(string &str){
    string sub;
    if(str.length()>1){
        sub = str.substr(1,str.length()-2);
        str = str.substr(str.length()-1,1)+Reverse(sub)+str.substr(0,1);//ȥ���ַ�����һ���ַ������1���ַ�������м䲿�ֵ��ַ�������
    }

return str;
}


int main(){
  string str,str1;
  cout<<"�������ַ����� ";
  cin>>str;
  cout<<"ԭʼ�� "<<str<<endl;
  str = Reverse(str);
  cout<<"������ "<<str<<endl;

return 0;
}
