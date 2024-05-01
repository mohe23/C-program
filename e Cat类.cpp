#include<iostream>
using namespace std;

class Cat{
public:
    Cat(char i){ // ���캯����
         name = i;
         num++;
    }

    Cat(Cat &c){  //���ƹ��캯����
        name = c.name;
        num++;
    }

    static int getNum(){ //��̬��Ա������
         return num;
    }

    ~Cat(){ num--;}

private:
    char name;
    static int num; //��̬���ݳ�Ա��
};

int Cat::num = 0; //������Ծ�̬���ݳ�Ա˵���Լ���ʼ����

int main(){
   int n1;
   Cat c1('C');
   Cat c2('d');
   Cat c3 = c2;
   n1 = Cat::getNum();

   cout<<"num: "<<n1<<endl;

   return 0;
}
