#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

//vector可以理解为一个动态数组。
void Pt(vector<int>v, int len){ // v是向量，len是向量中元素个数。
   int i;
   cout<<"Pt 向量vector中元素: ";
   for(i=0;i<len;i++)
    cout<<v[i]<<" ";
    cout<<endl;

}


void Pte(vector<int>v){ // v是动态数组
    vector<int>::iterator ite; //定义1个vector的迭代器
    cout<<"Pte 向量vector中元素: ";
    for(ite=v.begin();ite<v.end();ite++)// v.end()是指数组现存所有元素的最后1个元素的下1个元素，即指向1个不存在的元素。
        cout<<*ite<<"  ";
    cout<<endl;
}


void Pta(vector<int>v){// v是动态数组
    int i;
    cout<<"Pta vector数组中元素： ";
    for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";//还可以直接使用数组取值方法v[i]。
    cout<<endl;

}


int main(){

 int s[10] = {1,2,3,4,5,6,7,8,9,10};
 int i,ny, num = 1;
  vector<int>::iterator ita;
/*  vector<int>d(s, s+10);  //将数组中给向量d赋值。
 vector<int>f(10); //生成1个带有10个元素的int型向量
 vector<int>a(10,1); //尖括号中“int”表示数据类型。（）中‘10’表示定义10个元素。向量中值全为1。
 vector<int>b(a);  //生成另一个向量。向量a给向量b赋值。
 vector<int>c(d.begin()+2,d.begin()+5);  //将向量a中下标从2~4的元素赋值给向量d; 下标从‘2’（前一个数字）开始；5-2=3，从下标2开始
                                           //向后数3个元素赋值给要赋值的向量。
 Pt(a,10);
 Pt(b,10);
 Pt(c,3);
 Pt(d,7);*/

/*  vector<int>a,b(s,s+10);
  //a.assign(4,6); //a为4个元素值为6的向量。
  a.assign(b.begin(),b.begin()+4); //输出下标从0~3的数值。
  vector<int>c(b); // 生成向量c。
  vector<int>d(b); // 生成向量d。
  vector<int>w(10);
  w.insert(w.begin()+3,s+6,s+9);

  Pt(a,4);
  Pt(b,10);
  cout<<"返回向量b的第一个元素：";
  cout<<b.front()<<endl;
  cout<<"返回向量b的最后一个元素：";
  cout<<b.back()<<endl;

  cout<<"返回向量b中下标为"<<num<<"的元素："<<b[num]<<endl; //返回向量b中下标为‘num’的元素值。向量可以看做是1个动态数组。

  c.clear(); //清空向量b。
  cout<<"向量是否为空："<<a.empty()<<endl; //输出向量是否为空！为空，返回true;非空，返回false。
  cout<<"向量是否为空："<<c.empty()<<endl; //输出向量是否为空！为空，返回true;非空，返回false。

  b.pop_back(); //删除向量b的最后一个元素。
  cout<<"删除向量的最后1个元素！";
  Pt(b,9);

  d.erase(d.begin()+3,d.begin()+7); //删除向量中第4~7个元素。
  cout<<"删除向量中第4~7个元素  ";
  Pt(d,6);

  b.push_back(45);
  cout<<"在向量最后插入1个元素！";
  Pt(b,10);

  b.insert(b.begin()+1,32);
  cout<<"在向量中第2个元素（下标为1）中插入值32！";
  Pt(b,11);

  b.insert(b.begin()+6,39);
  cout<<"在向量中第7个元素（下标为6）中插入值39！";
  Pt(b,12);

  b.insert(b.begin()+1,3,18);
  cout<<"在向量中第2个元素（下标为1）中插入3个值为18的数！";
  Pt(b,15);

  b.insert(b.begin()+2,s+6,s+9);
  cout<<"在向量b的第3个元素位置开始插入数组s的第7~9个元素！";
  Pt(b,18);

  Pt(w,13);
  cout<<"返回向量w中元素个数: "<<w.size()<<endl; //根据2个函数输出的结果，向1个vector中插入几个元素时，这个vector的实际多出来存储空间
  cout<<"返回向量w中总共可以容纳的元素个数: "<<w.capacity()<<endl; //比这个vector现有元素个数多。vector原先有10个储存空间，向vector插入
                                                                    //2个元素，此时vector有12个元素，但是vector的实际存储空间是20。

  w.resize(10);
  a.resize(10,34);
  cout<<"将vector的大小调整为10，多则删除，少则增加（增加的值随意）："<<endl;
  Pt(w,10);
  Pt(a,10);

  a.reserve(100);
  cout<<"将vector a扩充为100个存储单位！"<<endl;
  Pt(a,10);
  cout<<"a的存储单位大小："<<a.capacity()<<endl;

  cout<<"交换前2个vector: "<<endl;
  Pt(w,10);
  Pt(a,10);
  a.swap(w);
  cout<<"交换后2个vector: "<<endl;
  Pt(w,10);
  Pt(a,10);  */

   vector<int>a;
   for(i=1;i<=10;i++)
    a.push_back(i); //从向量a尾部中添加元素。
    cout<<"Pt: "<<endl;
   Pt(a,a.size());
   cout<<"Pte: "<<endl;
   Pte(a);
   cout<<endl;
   Pta(a);

   cout<<"用vector中的at来访问数据 at(0)"<<endl;
   cout<<a.at(0)<<endl<<endl;



    for(i=1;i<=6;i++)
       a.pop_back(); //删除最后1个元素
    cout<<"向量a的大小为："<<a.size()<<endl;
    cout<<"123:"<<endl;
      Pt(a,a.size());
    cout<<endl<<endl;


    vector<int>b;
    for(i=1;i<6;i++)
        b.push_back(s[i]); //通过数组中元素向向量b中添加值。
    ny = b.size(); // 求得数组当前元素个数
    cout<<"向量b的大小："<<ny<<endl;
    Pt(b,b.size());
    cout<<endl;

    vector<int>c,d(s,s+4); //vector<int>::iterator是声明创建1个'向量迭代器'。
    for(vector<int>::iterator it=d.begin();it<d.end();it++) //这个可以将向量d中全部元素全部赋值到向量c。
        c.push_back(*it);
    cout<<"向量c的大小："<<c.size()<<endl;
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
