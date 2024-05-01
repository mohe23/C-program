//******getline(c,d) c-正在读取的输入流， d-接收输入字符串的string变量名称。
// *****可以解决输入“Jl shu”，同时输出原输入字符串。

#include<iostream>
#include<string>
using namespace std;

int main(){

  string name,city;
  cout<<"Please enter your name: ";
  getline(cin, name);
  cout<<"Please enter city: ";
  getline(cin, city);

  cout<<"Hello,  "<<name<<endl;
  cout<<"You live in  "<<city<<endl;

return 0;
}
