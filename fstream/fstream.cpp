#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
/*
  ofstream fout("D:\\data.txt");
  if(!fout)
    cout<<"�ļ���ʧ�ܣ�"<<endl;
  else{
    fout<<"hello, my world!"<<endl;
    fout.close();
    cout<<"�ļ�д��ɹ���"<<endl;
  }  // */
/*
  ofstream fout;
  fout.open("D:\\data.txt",ios::app); //��������ļ�ԭ�����ݣ��������ļ�ԭ�����ݻ����ϼ����ݣ�
  if(!fout)
    cout<<"�ļ���ʧ�ܣ�"<<endl;
  else{
    fout<<"hello, my world!"<<endl;
    fout.close();
    cout<<"�ļ�д��ɹ���"<<endl;
  }  //*/

  ifstream fin;
  string str="";
  ;
  //cout<<"strԭ���ݣ�"<<str<<endl;
   fin.open("D:\\data.txt");
   getline(fin,str);
   cout<<"str���ݣ�"<<str<<endl;
   fin.close();

  return 0;
}
