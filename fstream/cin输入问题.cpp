// 当 cin 读取数据时，它会传递并忽略任何前导白色空格字符（空格、制表符或换行符）。一旦它接触到第一个非空格字符即开始阅读，
//当它读取到下一个空白字符时，它将停止读取

#include<iostream>
#include<string>
using namespace std;
// cin>>name;  可以输入"Mark"或者"Twain"，但是不能输入"Mark Twain"，原因是cin不能包含嵌入空格的字符串。
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
// 程序运行结果如下：
// Please enter your name： John Doe
//Enter the city you live in: Hello, John
//You live in Doe

//分析结果：
//在这个结果中，输入了“John Doe”之后，根本就不会给我输入city名，而是直接输出下面2行。
//当输入“John Doe”，cin读到了中间的空白字符，就会停止读取，选择"John"作为name，
//在city的输入语句中，cin从键盘缓冲区中中找到剩余的字符，就将“Doe”作为city名。
//为了能够输出正确的名字，可以使用C++中getline函数解决问题。
