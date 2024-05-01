#include<iostream>
using namespace std;

class Document{
public:
    Document(){}//不带参数的构造函数。
    Document(string n);//带参数的构造函数。
    ~Document(){cout<<"析构Doc"<<endl;}
    void setName(string n1);//设置数据成员name。
    string getName(){return name;}
private:
    string name;
};

Document::Document(string n){
     name = n;
     cout<<"构造doc"<<endl;
}

void Document::setName(string n1){
     name = n1;
}


class Book:public Document{
public:
    Book();
    Book(string str,int pat):Document(str),pageCount(pat){cout<<"构造Book"<<endl;};//带参数的构造函数。
    ~Book(){cout<<"析构BOOK"<<endl;}
    void setPage(int pa);//
    int getPage(){return pageCount;}

private:
    int pageCount;
};

void Book::setPage(int pa){
   pageCount = pa;
}


int main(){
   Book b2("weq",34);
   cout<<b2.getName()<<"  "<<b2.getPage()<<endl;
   b2.setName("C program");
   cout<<b2.getName()<<"  "<<b2.getPage()<<endl;

return 0;
}
