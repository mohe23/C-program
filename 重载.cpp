#include<iostream>
using namespace std;


int add(int a, int b){
     int c;
     c = a + b;
     return c;
}


double add(double a, double b){
        double c;
        c = a + b;
        return c;

}


int main(){
    int a = 3, b = 4, x;
    double c = 23.7, d = 43.8, y;

    x = add(a,b);
    y = add(c,d);

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;

    return 0;
}
