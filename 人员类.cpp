#include<iostream>
using namespace std;

class Date{   //������
  public:
     Date(int Year,int Month,int Day);//���캯����
    // Date(int a=2021,int b=3,int c=25);//��Ĭ��ֵ
     Date(Date &p);//���ƹ��캯����
     int GetY(){ return year;}
     int GetM(){ return month;}
     int GetD(){ return day;}
     void SetDate(int ya,int ma,int da);//��������
     void ShowDate();//��ʾ���ڡ�

  private:
     int year;
     int month;
     int day;

};


Date::Date(int Year,int Month,int Day){

    year=Year;
    month=Month;
    day=Day;
}


Date::Date(Date &p){

   year=p.year;
   month=p.month;
   day=p.day;
}


void Date::SetDate(int ya,int ma,int da){

   year=ya;
   month=ma;
   day=da;
}


void Date::ShowDate(){

   cout<<year<<"��"<<month<<"��"<<day<<"��"<<endl;
}

//Date date3(2021,3,25);

class Person{

  public:
     Person(Date date1,string num2="11001",string name2="JC",char sex2='F',string id="340321",float he=185.4,float we=70.5);
      //��Ĭ��ֵ�Ĺ��캯��
     Person(Person &p);//���ƹ��캯����
     ~Person(){};//����������
     void setP(string s1,string s2,char c1,Date d1,string s3,float f1,float f2);//�������ֵ��
     string getNum(){ return num;}//���ر�š�
     string getName(){return name;}//����������
     char getSex(){return sex;}//�����Ա�
     string getIdcode(){return IDcode;}
     float getHeight(){return height;}
     float getWeight(){return weight;}
     void showP();//�����Ա������Ϣ��

  private:
     string num;//Ա���ı��
     string name;//Ա����������
     char sex;//Ա�����Ա𡣡�F��-Ů�ԣ���M��-���ԡ�
     Date date;//Ա���ĳ������ڡ�
     string IDcode;//Ա�������֤���롣
     float height;//Ա������ߡ�
     float weight;//Ա�������ء�

};


Person::Person(Date date1,string num1,string name1,char sex1,string id,float hei,float wei):date(date1){//���캯����

  num=num1;
  name=name1;
  sex=sex1;
  date=date1;
  IDcode=id;
  height=hei;
  weight=wei;
}


Person::Person(Person &p):date(p.date){//���ƹ��캯����
    num=p.num;
    name=p.name;
    sex=p.sex;
    date=p.date;
    IDcode=p.IDcode;
    height=p.height;
    weight=p.weight;

}


void Person::setP(string s1,string s2,char c1,Date d1,string s3,float f1,float f2){

    num=s1;
    name=s2;
    sex=c1;
    date=d1;
    IDcode=s3;
    height=f1;
    weight=f2;
}


void Person::showP(){

   cout<<"���: "<<num<<endl;
   cout<<"������"<<name<<endl;
   cout<<"�Ա�"<<sex<<endl;
   date.ShowDate();
   cout<<"���֤���룺"<<IDcode<<endl;
   cout<<"��ߣ�"<<height<<"cm"<<endl;
   cout<<"���أ�"<<weight<<"kg"<<endl<<endl;
}


int main(){

  int a,b,c,a1,b1,c1;
  a1=2021;
  b1=6;
  c1=23;
  Date date3(a1,b1,c1);
  string str1,str2,str3;
  char ch;
  float fa,fb;

  cout<<"����������:"<<endl;
  cin>>a>>b>>c;
  cout<<"�����ţ��������Ա����֤���룬��ߣ����أ�"<<endl;
  cin>>str1>>str2>>ch>>str3>>fa>>fb;

  Date date2(a,b,c);
   cout<<endl;

  Person pe(date2,str1,str2,ch,str3,fa,fb);
  Person pt(date3);

  pe.showP();
  pt.showP();

  return 0;
}
