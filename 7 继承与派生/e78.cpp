#include<iostream>
using namespace std;

class Document{
public:
    Document(){}//���������Ĺ��캯����
    Document(string n);//�������Ĺ��캯����
    ~Document(){cout<<"����Doc"<<endl;}
    void setName(string n1);//�������ݳ�Աname��
    string getName(){return name;}
private:
    string name;
};

Document::Document(string n){
     name = n;
     cout<<"����doc"<<endl;
}

void Document::setName(string n1){
     name = n1;
}


class Book:public Document{
public:
    Book();
    Book(string str,int pat):Document(str),pageCount(pat){cout<<"����Book"<<endl;};//�������Ĺ��캯����
    ~Book(){cout<<"����BOOK"<<endl;}
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
