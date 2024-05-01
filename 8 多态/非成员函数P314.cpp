#include<iostream>
using namespace std;

class comple{
public:
    comple(double r=0.0, double i=0.0):real(r),imag(i){}//构造函数。
    friend comple operator+(const comple&c1, const comple&c2);//友元函数
    friend comple operator-(const comple&c1, const comple&c2);//友元函数。
    friend ostream & operator<<(ostream &out, const comple&c);//
private:
    double real;
    double imag;
};

comple operator+(const comple&c1, const comple&c2){
    return comple(c1.real+c2.real,c1.imag+c2.imag);
}

comple operator-(const comple&c1, const comple&c2){
   return comple(c1.real-c2.real,c1.imag-c2.imag);
}

ostream & operator<<(ostream &out, const comple&c){
     out<<"("<<c.real<<","<<c.imag<<")";
     return out;
}

int main(){
   comple c1(12,34),c2(3,4),c3;
   c3 = c1-c2;
   cout<<"c1: "<<c1<<endl;
   cout<<"c2: "<<c2<<endl;
   cout<<"c3: "<<c3<<endl;
return 0;
}
