#include<iostream>
using namespace std;

int maxy(int a, int b){ // �����Լ����
    int c;
    if(a < b){ // ��֤a��2����֮��ϴ������
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
    cout<<"������2�������� ";
    cin>>x>>y;
    z = maxy(x, y);//������������
    t = x*y/z;  //�����С��������
    cout<<"��������� "<<z<<endl;
    cout<<"��С�������� "<<t<<endl;

    return 0;
}
