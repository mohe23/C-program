#include<iostream>

using namespace std;


enum CPU_Rank{p1=1, p2, p3, p4, p5, p6, p7};

class Cpu{
   public:
       Cpu(CPU_Rank r, int f, float v); //���캯����
       Cpu(Cpu &u); // ���ƹ��캯����
       void run();
       void stop();
       void showcpu(){
            cout<<"CPU�����ݣ�"<<rak<<" "<<frequency<<" "<<voltage<<endl;
       }

       ~Cpu(){; //����������
              cout<<"Cpu,������������!!!"<<endl;
       }

   private:
       CPU_Rank rak;
       int frequency;
       float voltage;

};


Cpu::Cpu(CPU_Rank r, int f, float v){
      rak = r;
      frequency = f;
      voltage = v;
      cout<<"Cpu,���ù��캯��!!!"<<endl;
}

Cpu::Cpu(Cpu &u){ // ���ƹ��캯����
     rak = u.rak;
     frequency = u.frequency;
     voltage = u.voltage;
}

void Cpu::run(){

   cout<<"The cpu begins to run!"<<endl;
}


void Cpu::stop(){

   cout<<"The cpu stops!!!! "<<endl;
}



class RAM{ // RAM��
    public:
       RAM(int lo){ // ���캯����
           load = lo;
           cout<<"����RAM!!!"<<endl;
       }

       void setLoad(int l1){ // ����load��
           load = l1;
       }

       void showram(){

          cout<<"RAM���ݣ� "<<load<<endl;
       }

       ~RAM(){
              cout<<"����RAM!!!"<<endl;
       }

    private:
             int load;
};


class CDROM{ // CDROM�ࡣ
    public:
            CDROM(float bas){ // ���캯��
                base = bas;
                cout<<"����CDROM"<<endl;
            }

            void setBase(float base1){ //����base
                  base = base1;
            }

            void showBase(){
                  cout<<"CDROM����: "<<base<<endl;
            }

            ~CDROM(){
                 cout<<"����CDROM!!!"<<endl;
            }
    private:
        float base;

};



class Computer{  // Computer�ࡣ
    public:
        Computer(Cpu c, RAM r, CDROM d); //���캯����

        Computer(Computer &p); //���ƹ��캯����

        void runs(){
            cout<<"Computer runs!!!"<<endl;
        }

        void stops(){
            cout<<"Computer stops!!!!"<<endl;
        }

        void showComp(){
            cpu.showcpu();
            ram.showram();
            cdrom.showBase();
           // cout<<"this is show function!!!"<<endl;
        }

        ~Computer(){
             cout<<"����Computer!!!"<<endl;
        }

    private:
        Cpu cpu;
        RAM ram;
        CDROM cdrom;

};

// :cpu(c),ram(r),cdrom(d)
Computer::Computer(Cpu c, RAM r, CDROM d):cpu(c),ram(r),cdrom(d){ // ���캯����
     // cpu = c;
      //ram = r;
      //cdrom = d;
     cout<<"Computer��Ĺ��캯������"<<endl;
}

Computer::Computer(Computer &p):cpu(p.cpu),ram(p.ram),cdrom(p.cdrom){ // ���ƹ��캯����
     cout<<"Computer��ĸ��ƹ��캯��������"<<endl;
}


int main(){

  Cpu cp(p4, 23, 5.6);
  RAM ra(134);
  CDROM cd(34.7);
  Computer com(cp, ra, cd);
  //Computer c2;
  //
  cout<<endl;
  com.showComp();
  com.runs();
  com.stops();
  cout<<endl;
  //com.runs();
  //com.stop();

return 0;
}
