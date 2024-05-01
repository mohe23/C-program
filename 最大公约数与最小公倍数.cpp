#include<iostream>
using namespace std;

int maxy(int a, int b){ // 求最大公约数。
    int c;
    if(a < b){ // 保证a是2个数之间较大的数。
        c = a;
        a = b;
        b = c;
    }
    while(b != 0){
        c = a % b;
        a = b;
        b = c;
    }

 return a;
}


int main(){
    int x, y, z, t;
    cout<<"请输入2个整数： ";
    cin>>x>>y;
    z = maxy(x, y);//求得最大公因数。
    t = x*y/z;  //求得最小公倍数。
    cout<<"最大公因数： "<<z<<endl;
    cout<<"最小公倍数： "<<t<<endl;

    return 0;
}
