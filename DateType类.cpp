#include<iostream>
using namespace std;

class DataType{

   public:
      DataType(char ch1,int n1,float f1);//����Ĭ��ֵ�Ĺ��캯����
      DataType(){
          ch='C';
          num=10;
          f=34.5;
      }

      DataType(DataType &p);//���ƹ��캯����
      ~DataType(){};//����������
      void SetChar(char ch2);//����DataType����ַ�ֵ��
      int Add(int t1);//�ӷ���
      float Multip(float fa);//�˷���
      void ShowData();//��ӡ3��˽�������ݡ�
      void IsT(char c);//��ĳ�Ա�����Ƿ���c��ͬ��

   private:
      char ch;//�ַ������ݡ�
      int num;//�������ݡ�
      float f;//���������ݡ�

};


DataType::DataType(char ch1,int n1,float f1){

    ch=ch1;
    num=n1;
    f=f1;
}


DataType::DataType(DataType &p){

    ch=p.ch;
    num=p.num;
    f=p.f;
}


int DataType::Add(int t1){

   int t;
   t=t1+num;

   return t;
}


float DataType::Multip(float fa){

    float fa1;
    fa1=fa*f;

    return fa1;
}


void DataType::SetChar(char ch2){

    ch=ch2;
}


void DataType::IsT(char c){

     if(c==ch)
        cout<<"true"<<endl;
     else
       cout<<"false"<<endl;
}



void DataType::ShowData(){

    cout<<"char��"<<ch<<endl;
    cout<<"int��"<<num<<endl;
    cout<<"float��"<<f<<endl<<endl;
}



int main(){

   DataType d1('S',67,89.6);
   DataType d2;
    bool b3=true;

   int ds=d1.Add(78);
   float fs=d1.Multip(3.1);
    d1.SetChar('W');

     d1.IsT('j');
    d2.IsT('C');
     cout<<b3<<endl;
    cout<<ds<<endl;
   cout<<fs<<endl<<endl;

   d1.ShowData();
   //d2.ShowData();
   return 0;
}
