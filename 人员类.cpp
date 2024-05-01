#include<iostream>
using namespace std;

class Date{   //日期类
  public:
     Date(int Year,int Month,int Day);//构造函数。
    // Date(int a=2021,int b=3,int c=25);//带默认值
     Date(Date &p);//复制构造函数。
     int GetY(){ return year;}
     int GetM(){ return month;}
     int GetD(){ return day;}
     void SetDate(int ya,int ma,int da);//设置日期
     void ShowDate();//显示日期。

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

   cout<<year<<"年"<<month<<"月"<<day<<"日"<<endl;
}

//Date date3(2021,3,25);

class Person{

  public:
     Person(Date date1,string num2="11001",string name2="JC",char sex2='F',string id="340321",float he=185.4,float we=70.5);
      //带默认值的构造函数
     Person(Person &p);//复制构造函数。
     ~Person(){};//析构函数。
     void setP(string s1,string s2,char c1,Date d1,string s3,float f1,float f2);//设置相关值。
     string getNum(){ return num;}//返回编号。
     string getName(){return name;}//返回姓名。
     char getSex(){return sex;}//返回性别。
     string getIdcode(){return IDcode;}
     float getHeight(){return height;}
     float getWeight(){return weight;}
     void showP();//输出该员工的信息。

  private:
     string num;//员工的编号
     string name;//员工的姓名。
     char sex;//员工的性别。“F”-女性，“M”-男性。
     Date date;//员工的出生日期。
     string IDcode;//员工的身份证号码。
     float height;//员工的身高。
     float weight;//员工的体重。

};


Person::Person(Date date1,string num1,string name1,char sex1,string id,float hei,float wei):date(date1){//构造函数。

  num=num1;
  name=name1;
  sex=sex1;
  date=date1;
  IDcode=id;
  height=hei;
  weight=wei;
}


Person::Person(Person &p):date(p.date){//复制构造函数。
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

   cout<<"编号: "<<num<<endl;
   cout<<"姓名："<<name<<endl;
   cout<<"性别："<<sex<<endl;
   date.ShowDate();
   cout<<"身份证号码："<<IDcode<<endl;
   cout<<"身高："<<height<<"cm"<<endl;
   cout<<"体重："<<weight<<"kg"<<endl<<endl;
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

  cout<<"输入年月日:"<<endl;
  cin>>a>>b>>c;
  cout<<"输入编号，姓名，性别，身份证号码，身高，体重："<<endl;
  cin>>str1>>str2>>ch>>str3>>fa>>fb;

  Date date2(a,b,c);
   cout<<endl;

  Person pe(date2,str1,str2,ch,str3,fa,fb);
  Person pt(date3);

  pe.showP();
  pt.showP();

  return 0;
}
