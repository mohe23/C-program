#include<iostream>
#include<string>
using namespace std;

//使用递归算法实现字符串的倒置。

string Reverse(string &str){
    string sub;
    if(str.length()>1){
        sub = str.substr(1,str.length()-2);
        str = str.substr(str.length()-1,1)+Reverse(sub)+str.substr(0,1);//去掉字符串第一个字符，最后1个字符，获得中间部分的字符串进行
    }

return str;
}


int main(){
  string str,str1;
  cout<<"请输入字符串： ";
  cin>>str;
  cout<<"原始： "<<str<<endl;
  str = Reverse(str);
  cout<<"后来： "<<str<<endl;

return 0;
}
