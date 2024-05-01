#include<string>
#include<fstream>
#include<iomanip >
#include<iostream>
using namespace std;

//exit的功能为：退出当前运行的程序，并将参数value返回给主调进程
//exit(0)表示程序正常退出；除了0之外，其他参数均代表程序异常退出，如：exit(1),exit(-1)。
//exit(1)和exit(-1)是分别返回1和-1到主调程序。
//exit(0)则是返回0。exit(0)表示程序正常退出，非0表示非正常退出。
void ReadTxt(string Filename){ //读取txt文件内容
    string s;
    //ifstream file(Filename);
    ifstream file;
    file.open(Filename);
    if(!file)
        cout<<"打开文件失败！";

    else{
        while(getline(file, s))
        cout<<s<<endl;
    }

    file.close();//要保证open与close成对出现。
}



void OutTxt(string OFilename,string st){// OFilename是要被输入内容的txt文件，st是待输入的内容。
    ofstream outfile;
    outfile.open(OFilename,ios::app);//打开要输入内容的txt文件。加入方式是在原有内容的基础上加入新的内容。
    if(!outfile)
        cout<<"文件打开失败！";
    else
        outfile<<st<<endl;

  outfile.close();//open函数与close函数要成对出现。
}





int main(){

   //ifstream infile("D:\\data.txt");
   string str = "D:\\data.txt";
   string st = "D:\\da1.txt";
   string s1 = "swe123";
   string s2 = "12wer";
   int le;
   cout<<"data"<<endl;
   ReadTxt(str);
   cout<<endl<<endl;
   cout<<"da 原"<<endl;
   ReadTxt(st);
     cout<<endl<<endl;
   OutTxt(st,s1);
   cout<<"da 新"<<endl;
   ReadTxt(st);
   cout<<endl<<s2<<endl<<endl;
   s2 = s2 + "2367";
   cout<<s2<<endl<<endl;
   cout<<s2[2]<<endl<<endl;
    le = s2.length();//string.length()求字符串长度。
    cout<<"le: "<<le<<endl<<endl;
    /*ifstream infile;
    string s;
    infile.open("D:\\data.txt");
    if(!infile){
        cout<<"unable open txt";
        exit(1);
    }

    while(getline(infile,s)){
        cout<<s<<endl;
    }
    infile.close(); //文件有open，就有close。
    */

    return 0;
}
