// P130

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


struct Student{
     int num; //ѧ�š�
     string name; //������
     char sex;   // �Ա�
     int age;   // ���䡣

     void fun1(){
      cout<<"You are handsome!!!"<<endl;
     }
};



int main(){

   Student stu = {97001, "Linji", 'F'};

   cout<<"Num: "<<stu.num<<endl;
   cout<<"Name: "<<stu.name<<endl;
   cout<<"Sex: "<<stu.sex<<endl;
   cout<<"Age: "<<stu.age<<endl;
   stu.fun1();
   return 0;
}

