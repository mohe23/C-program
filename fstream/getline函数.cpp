//******getline(c,d) c-���ڶ�ȡ���������� d-���������ַ�����string�������ơ�
// *****���Խ�����롰Jl shu����ͬʱ���ԭ�����ַ�����

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
