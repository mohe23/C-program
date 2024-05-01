#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
/*
  ofstream fout("D:\\data.txt");
  if(!fout)
    cout<<"文件打开失败！"<<endl;
  else{
    fout<<"hello, my world!"<<endl;
    fout.close();
    cout<<"文件写入成功！"<<endl;
  }  // */
/*
  ofstream fout;
  fout.open("D:\\data.txt",ios::app); //不会清除文件原有数据，而是在文件原有数据基础上加数据！
  if(!fout)
    cout<<"文件打开失败！"<<endl;
  else{
    fout<<"hello, my world!"<<endl;
    fout.close();
    cout<<"文件写入成功！"<<endl;
  }  //*/

  ifstream fin;
  string str="";
  ;
  //cout<<"str原内容："<<str<<endl;
   fin.open("D:\\data.txt");
   getline(fin,str);
   cout<<"str内容："<<str<<endl;
   fin.close();

  return 0;
}
