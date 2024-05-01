#include<iostream>
using namespace std;

class comple{
public:
    comple(double r=0.0, double i=0.0):real(r),imag(i){}//构造函数。
    comple operator+(const comple&c2) const;//+重载函数。
    comple operator-(const comple&c2) const;//-重载函数。
    void display() const;//显示复数。
private:
    double real;
    double imag;
};


comple comple::operator+(const comple&c2) const{
   return comple(real+c2.real, imag+c2.imag);
}

comple comple::operator-(const comple&c2) const{
   return comple(real-c2.real, imag-c2.imag);
}

void comple::display() const{
   cout<<"("<<real<<","<<imag<<")"<<endl;
}


int main(){
    comple c1(14,3),c2(5,7),c3,c4;
    c3 = c1+c2;
    c4 = c1-c2;
    cout<<"c1: ";
    c1.display();
    cout<<"c2: ";
    c2.display();
    cout<<"c3: ";
    c3.display();
    cout<<"c4: ";
    c4.display();

return 0;
}
