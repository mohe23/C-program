#include<string>
#include<iostream>
using namespace std;

int main(){

    string s1,s2;
   // getline(cin,s1,',');//以“，”作为分割符。
   // getline(cin,s2);

    getline(cin,s1);//这个是以“换行符”作为分隔符
    getline(cin,s2);

    cout<<"s1: "<<s1<<endl;
    cout<<"s2: "<<s2<<endl;

return 0;
}
