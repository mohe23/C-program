#include<iostream>
using namespace std;

int fadd(int x){ //Çó 1+2+3+4+...+nµÄÖµ¡£
    int sum=0;

     if(x != 1)
        sum = sum + x + fadd(x-1);
     else
        sum = sum + 1;

    cout<<"sum: "<<sum<<endl;
  return sum;
}


int Fibona(int n){
    int s;
    if(n==1||n==2)
        s = 1;
    else
        s = Fibona(n-1) + Fibona(n-2);

    return s;
}



int main(){
     int x;

     x = fadd(1);
     cout<<"x: "<<x<<endl;
     cout<<"Fibo: "<<Fibona(3)<<endl;

 return 0;
}
