#include<iostream>
#include<string>
using namespace std;

int salph(string str){
     int i,len,sum=0;
     len = str.length();//获得字符串长度。
     for(i=0;i<len;i++){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
               sum++;
     }

return sum;
}


int main(){
   int s;
   string st;
   st = "sde3456";
   //cout<<st.substr(st.length()-1,1)<<endl;
   //cout<<st.substr(1,st.length()-2)<<endl;
   getline(cin,st);//是以换行符作为分隔符。只要输入的不是“换行符”。
   s = salph(st);
   cout<<"字母数量："<<s<<endl;

return 0;
}
