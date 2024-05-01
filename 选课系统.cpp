#include<iostream>
#include<stdlib.h>
using namespace std;

class Course{

   public:
      Course(string s,int c);//构造函数。
      Course(){
         name="chinese";
         credit=2;
      }

      Course(Course &p);//复制构造函数。

      ~Course(){//析构函数。
        cout<<"调用析构函数"<<endl;
      }

      string getName(){//返回课程名。
          return name;
      }

      int getCredit(){//返回课程学分。
        return credit;
      }

      void setCredit(int n);//修改课程的学分。
      void setName(string s);//修改课程名。
      void show();//显示课程名，及其学分。

   private:
      string name;//课名。
      int credit;//学分。
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

  cout<<"课程名："<<name<<endl;
  cout<<"学分："<<credit<<endl;
}



class CourseSchedule{

    public:
        CourseSchedule(Course *c1,int nums);//构造函数。
        CourseSchedule(CourseSchedule &p);//复制构造函数。
        ~CourseSchedule(){

          cout<<"调用析构函数！"<<endl;
        }

       void add(Course c2);//将课程加入计划中。
       void Remove(Course c3);//将课程数组中的课程删除。
       int getNum();//打印课程总数。
       void show();//打印课程表中的课程。

    private:
        Course *course;//Course类对象
        int num;//课程数
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

      cout<<"课程表已满，无法再加入课程！"<<endl;
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
           cout<<s<<"课程已删除！"<<endl;

           break;
        }

      }

}


int CourseSchedule::getNum(){

    return num;
}


void CourseSchedule::show(){

    int i;
    cout<<"输出课程表中的课程："<<endl;
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
   cout<<"课程总数: "<<cs.getNum()<<endl;

  //cs.Remove(c3);
  //cs.show();
   //c1.setCredit(3);
   //c1.show();
   //c2.show();

   return 0;
}
