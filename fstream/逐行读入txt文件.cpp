#include<string>
#include<fstream>
#include<iomanip >
#include<iostream>
using namespace std;

//exit�Ĺ���Ϊ���˳���ǰ���еĳ��򣬲�������value���ظ���������
//exit(0)��ʾ���������˳�������0֮�⣬������������������쳣�˳����磺exit(1),exit(-1)��
//exit(1)��exit(-1)�Ƿֱ𷵻�1��-1����������
//exit(0)���Ƿ���0��exit(0)��ʾ���������˳�����0��ʾ�������˳���
void ReadTxt(string Filename){ //��ȡtxt�ļ�����
    string s;
    //ifstream file(Filename);
    ifstream file;
    file.open(Filename);
    if(!file)
        cout<<"���ļ�ʧ�ܣ�";

    else{
        while(getline(file, s))
        cout<<s<<endl;
    }

    file.close();//Ҫ��֤open��close�ɶԳ��֡�
}



void OutTxt(string OFilename,string st){// OFilename��Ҫ���������ݵ�txt�ļ���st�Ǵ���������ݡ�
    ofstream outfile;
    outfile.open(OFilename,ios::app);//��Ҫ�������ݵ�txt�ļ������뷽ʽ����ԭ�����ݵĻ����ϼ����µ����ݡ�
    if(!outfile)
        cout<<"�ļ���ʧ�ܣ�";
    else
        outfile<<st<<endl;

  outfile.close();//open������close����Ҫ�ɶԳ��֡�
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
   cout<<"da ԭ"<<endl;
   ReadTxt(st);
     cout<<endl<<endl;
   OutTxt(st,s1);
   cout<<"da ��"<<endl;
   ReadTxt(st);
   cout<<endl<<s2<<endl<<endl;
   s2 = s2 + "2367";
   cout<<s2<<endl<<endl;
   cout<<s2[2]<<endl<<endl;
    le = s2.length();//string.length()���ַ������ȡ�
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
    infile.close(); //�ļ���open������close��
    */

    return 0;
}
