// �� cin ��ȡ����ʱ�����ᴫ�ݲ������κ�ǰ����ɫ�ո��ַ����ո��Ʊ�����з�����һ�����Ӵ�����һ���ǿո��ַ�����ʼ�Ķ���
//������ȡ����һ���հ��ַ�ʱ������ֹͣ��ȡ

#include<iostream>
#include<string>
using namespace std;
// cin>>name;  ��������"Mark"����"Twain"�����ǲ�������"Mark Twain"��ԭ����cin���ܰ���Ƕ��ո���ַ�����
int main(){

   string name,city;

   cout<<"Please enter your name: ";
   cin>>name;
   cout<<"Enter the city you live: ";
   cin>>city;
   cout<<"hello, "<<name<<endl;
   cout<<"You live in  "<<city<<endl;

return 0;

}
// �������н�����£�
// Please enter your name�� John Doe
//Enter the city you live in: Hello, John
//You live in Doe

//���������
//���������У������ˡ�John Doe��֮�󣬸����Ͳ����������city��������ֱ���������2�С�
//�����롰John Doe����cin�������м�Ŀհ��ַ����ͻ�ֹͣ��ȡ��ѡ��"John"��Ϊname��
//��city����������У�cin�Ӽ��̻����������ҵ�ʣ����ַ����ͽ���Doe����Ϊcity����
//Ϊ���ܹ������ȷ�����֣�����ʹ��C++��getline����������⡣
