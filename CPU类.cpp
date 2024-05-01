#include<iostream>

using namespace std;


enum CPU_Rank{p1=1, p2, p3, p4, p5, p6, p7};

class Cpu{
   public:
       Cpu(CPU_Rank r, int f, float v); //构造函数。
       Cpu(Cpu &u); // 复制构造函数。
       void run();
       void stop();
       void showcpu(){
            cout<<"CPU的数据："<<rak<<" "<<frequency<<" "<<voltage<<endl;
       }

       ~Cpu(){; //析构函数。
              cout<<"Cpu,调用析构函数!!!"<<endl;
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
      cout<<"Cpu,调用构造函数!!!"<<endl;
}

Cpu::Cpu(Cpu &u){ // 复制构造函数。
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



class RAM{ // RAM类
    public:
       RAM(int lo){ // 构造函数。
           load = lo;
           cout<<"构造RAM!!!"<<endl;
       }

       void setLoad(int l1){ // 设置load。
           load = l1;
       }

       void showram(){

          cout<<"RAM数据： "<<load<<endl;
       }

       ~RAM(){
              cout<<"析构RAM!!!"<<endl;
       }

    private:
             int load;
};


class CDROM{ // CDROM类。
    public:
            CDROM(float bas){ // 构造函数
                base = bas;
                cout<<"构造CDROM"<<endl;
            }

            void setBase(float base1){ //设置base
                  base = base1;
            }

            void showBase(){
                  cout<<"CDROM数据: "<<base<<endl;
            }

            ~CDROM(){
                 cout<<"析构CDROM!!!"<<endl;
            }
    private:
        float base;

};



class Computer{  // Computer类。
    public:
        Computer(Cpu c, RAM r, CDROM d); //构造函数。

        Computer(Computer &p); //复制构造函数。

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
             cout<<"析构Computer!!!"<<endl;
        }

    private:
        Cpu cpu;
        RAM ram;
        CDROM cdrom;

};

// :cpu(c),ram(r),cdrom(d)
Computer::Computer(Cpu c, RAM r, CDROM d):cpu(c),ram(r),cdrom(d){ // 构造函数。
     // cpu = c;
      //ram = r;
      //cdrom = d;
     cout<<"Computer类的构造函数！！"<<endl;
}

Computer::Computer(Computer &p):cpu(p.cpu),ram(p.ram),cdrom(p.cdrom){ // 复制构造函数。
     cout<<"Computer类的复制构造函数！！！"<<endl;
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
