#include<iostream>
#include<stdlib.h>
using namespace std;

class Course{

   public:
      Course(string s,int c);//���캯����
      Course(){
         name="chinese";
         credit=2;
      }

      Course(Course &p);//���ƹ��캯����

      ~Course(){//����������
        cout<<"������������"<<endl;
      }

      string getName(){//���ؿγ�����
          return name;
      }

      int getCredit(){//���ؿγ�ѧ�֡�
        return credit;
      }

      void setCredit(int n);//�޸Ŀγ̵�ѧ�֡�
      void setName(string s);//�޸Ŀγ�����
      void show();//��ʾ�γ���������ѧ�֡�

   private:
      string name;//������
      int credit;//ѧ�֡�
};


Course::Course(string s,int c){

    name=s;
    credit=c;
}


Course::Course(Course &p){

    name=p.name;
    credit=p.credit;
}


void Course::setCredit(int n){

    credit=n;
}


void Course::setName(string s){

    name=s;
}


void Course::show(){

  cout<<"�γ�����"<<name<<endl;
  cout<<"ѧ�֣�"<<credit<<endl;
}



class CourseSchedule{

    public:
        CourseSchedule(Course *c1,int nums);//���캯����
        CourseSchedule(CourseSchedule &p);//���ƹ��캯����
        ~CourseSchedule(){

          cout<<"��������������"<<endl;
        }

       void add(Course c2);//���γ̼���ƻ��С�
       void Remove(Course c3);//���γ������еĿγ�ɾ����
       int getNum();//��ӡ�γ�������
       void show();//��ӡ�γ̱��еĿγ̡�

    private:
        Course *course;//Course�����
        int num;//�γ���
};


CourseSchedule::CourseSchedule(Course *c1,int nums){

    course=c1;
    num=nums;
}


CourseSchedule::CourseSchedule(CourseSchedule &p){

     course=p.course;
     num=p.num;
}


void CourseSchedule::add(Course c){

    if(num>=10){

      cout<<"�γ̱��������޷��ټ���γ̣�"<<endl;
    }
    else{

        course[num]=c;
        num=num+1;
    }

}


void CourseSchedule::Remove(Course c){

      int i;
      string s;

      for(i=0;i<10;i++)
      {
        s=course[i].getName();

        if(s==c.getName())
        {
           course[i].setName("NULL");
           course[i].setCredit(0);
           cout<<s<<"�γ���ɾ����"<<endl;

           break;
        }

      }

}


int CourseSchedule::getNum(){

    return num;
}


void CourseSchedule::show(){

    int i;
    cout<<"����γ̱��еĿγ̣�"<<endl;
    for(i=0;i<num;i++){

         course[i].show();
    }
    cout<<endl;
}

int main(){

   Course *c=(Course*)calloc(10,sizeof(Course));
   Course c2("math",3);
   Course c3("C++",3);
   Course c4("Python",2);
   Course c5("Database",3);

   CourseSchedule cs(c,0);
   cs.add(c2);
   cs.add(c3);
   cs.add(c4);
   cs.add(c5);


   cs.show();
   cout<<"�γ�����: "<<cs.getNum()<<endl;

  //cs.Remove(c3);
  //cs.show();
   //c1.setCredit(3);
   //c1.show();
   //c2.show();

   return 0;
}
