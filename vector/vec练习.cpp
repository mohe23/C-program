#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

//vector�������Ϊһ����̬���顣
void Pt(vector<int>v, int len){ // v��������len��������Ԫ�ظ�����
   int i;
   cout<<"Pt ����vector��Ԫ��: ";
   for(i=0;i<len;i++)
    cout<<v[i]<<" ";
    cout<<endl;

}


void Pte(vector<int>v){ // v�Ƕ�̬����
    vector<int>::iterator ite; //����1��vector�ĵ�����
    cout<<"Pte ����vector��Ԫ��: ";
    for(ite=v.begin();ite<v.end();ite++)// v.end()��ָ�����ִ�����Ԫ�ص����1��Ԫ�ص���1��Ԫ�أ���ָ��1�������ڵ�Ԫ�ء�
        cout<<*ite<<"  ";
    cout<<endl;
}


void Pta(vector<int>v){// v�Ƕ�̬����
    int i;
    cout<<"Pta vector������Ԫ�أ� ";
    for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";//������ֱ��ʹ������ȡֵ����v[i]��
    cout<<endl;

}


int main(){

 int s[10] = {1,2,3,4,5,6,7,8,9,10};
 int i,ny, num = 1;
  vector<int>::iterator ita;
/*  vector<int>d(s, s+10);  //�������и�����d��ֵ��
 vector<int>f(10); //����1������10��Ԫ�ص�int������
 vector<int>a(10,1); //�������С�int����ʾ�������͡������С�10����ʾ����10��Ԫ�ء�������ֵȫΪ1��
 vector<int>b(a);  //������һ������������a������b��ֵ��
 vector<int>c(d.begin()+2,d.begin()+5);  //������a���±��2~4��Ԫ�ظ�ֵ������d; �±�ӡ�2����ǰһ�����֣���ʼ��5-2=3�����±�2��ʼ
                                           //�����3��Ԫ�ظ�ֵ��Ҫ��ֵ��������
 Pt(a,10);
 Pt(b,10);
 Pt(c,3);
 Pt(d,7);*/

/*  vector<int>a,b(s,s+10);
  //a.assign(4,6); //aΪ4��Ԫ��ֵΪ6��������
  a.assign(b.begin(),b.begin()+4); //����±��0~3����ֵ��
  vector<int>c(b); // ��������c��
  vector<int>d(b); // ��������d��
  vector<int>w(10);
  w.insert(w.begin()+3,s+6,s+9);

  Pt(a,4);
  Pt(b,10);
  cout<<"��������b�ĵ�һ��Ԫ�أ�";
  cout<<b.front()<<endl;
  cout<<"��������b�����һ��Ԫ�أ�";
  cout<<b.back()<<endl;

  cout<<"��������b���±�Ϊ"<<num<<"��Ԫ�أ�"<<b[num]<<endl; //��������b���±�Ϊ��num����Ԫ��ֵ���������Կ�����1����̬���顣

  c.clear(); //�������b��
  cout<<"�����Ƿ�Ϊ�գ�"<<a.empty()<<endl; //��������Ƿ�Ϊ�գ�Ϊ�գ�����true;�ǿգ�����false��
  cout<<"�����Ƿ�Ϊ�գ�"<<c.empty()<<endl; //��������Ƿ�Ϊ�գ�Ϊ�գ�����true;�ǿգ�����false��

  b.pop_back(); //ɾ������b�����һ��Ԫ�ء�
  cout<<"ɾ�����������1��Ԫ�أ�";
  Pt(b,9);

  d.erase(d.begin()+3,d.begin()+7); //ɾ�������е�4~7��Ԫ�ء�
  cout<<"ɾ�������е�4~7��Ԫ��  ";
  Pt(d,6);

  b.push_back(45);
  cout<<"������������1��Ԫ�أ�";
  Pt(b,10);

  b.insert(b.begin()+1,32);
  cout<<"�������е�2��Ԫ�أ��±�Ϊ1���в���ֵ32��";
  Pt(b,11);

  b.insert(b.begin()+6,39);
  cout<<"�������е�7��Ԫ�أ��±�Ϊ6���в���ֵ39��";
  Pt(b,12);

  b.insert(b.begin()+1,3,18);
  cout<<"�������е�2��Ԫ�أ��±�Ϊ1���в���3��ֵΪ18������";
  Pt(b,15);

  b.insert(b.begin()+2,s+6,s+9);
  cout<<"������b�ĵ�3��Ԫ��λ�ÿ�ʼ��������s�ĵ�7~9��Ԫ�أ�";
  Pt(b,18);

  Pt(w,13);
  cout<<"��������w��Ԫ�ظ���: "<<w.size()<<endl; //����2����������Ľ������1��vector�в��뼸��Ԫ��ʱ�����vector��ʵ�ʶ�����洢�ռ�
  cout<<"��������w���ܹ��������ɵ�Ԫ�ظ���: "<<w.capacity()<<endl; //�����vector����Ԫ�ظ����ࡣvectorԭ����10������ռ䣬��vector����
                                                                    //2��Ԫ�أ���ʱvector��12��Ԫ�أ�����vector��ʵ�ʴ洢�ռ���20��

  w.resize(10);
  a.resize(10,34);
  cout<<"��vector�Ĵ�С����Ϊ10������ɾ�����������ӣ����ӵ�ֵ���⣩��"<<endl;
  Pt(w,10);
  Pt(a,10);

  a.reserve(100);
  cout<<"��vector a����Ϊ100���洢��λ��"<<endl;
  Pt(a,10);
  cout<<"a�Ĵ洢��λ��С��"<<a.capacity()<<endl;

  cout<<"����ǰ2��vector: "<<endl;
  Pt(w,10);
  Pt(a,10);
  a.swap(w);
  cout<<"������2��vector: "<<endl;
  Pt(w,10);
  Pt(a,10);  */

   vector<int>a;
   for(i=1;i<=10;i++)
    a.push_back(i); //������aβ�������Ԫ�ء�
    cout<<"Pt: "<<endl;
   Pt(a,a.size());
   cout<<"Pte: "<<endl;
   Pte(a);
   cout<<endl;
   Pta(a);

   cout<<"��vector�е�at���������� at(0)"<<endl;
   cout<<a.at(0)<<endl<<endl;



    for(i=1;i<=6;i++)
       a.pop_back(); //ɾ�����1��Ԫ��
    cout<<"����a�Ĵ�СΪ��"<<a.size()<<endl;
    cout<<"123:"<<endl;
      Pt(a,a.size());
    cout<<endl<<endl;


    vector<int>b;
    for(i=1;i<6;i++)
        b.push_back(s[i]); //ͨ��������Ԫ��������b�����ֵ��
    ny = b.size(); // ������鵱ǰԪ�ظ���
    cout<<"����b�Ĵ�С��"<<ny<<endl;
    Pt(b,b.size());
    cout<<endl;

    vector<int>c,d(s,s+4); //vector<int>::iterator����������1��'����������'��
    for(vector<int>::iterator it=d.begin();it<d.end();it++) //������Խ�����d��ȫ��Ԫ��ȫ����ֵ������c��
        c.push_back(*it);
    cout<<"����c�Ĵ�С��"<<c.size()<<endl;
    Pt(d,d.size());
    Pt(c,c.size());
    cout<<endl;

    ifstream in("D:\\data.txt");
    vector<int>e;
    for(int i;in>>i;)
        e.push_back(i);
    Pt(e, e.size());
    cout<<endl;



 return 0;

}
