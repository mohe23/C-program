#include<iostream>
#include<string>
using namespace std;

int salph(string str){
     int i,len,sum=0;
     len = str.length();//����ַ������ȡ�
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
   getline(cin,st);//���Ի��з���Ϊ�ָ�����ֻҪ����Ĳ��ǡ����з�����
   s = salph(st);
   cout<<"��ĸ������"<<s<<endl;

return 0;
}
