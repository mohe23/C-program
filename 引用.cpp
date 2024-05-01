#include<iostream>
using namespace std;


void swaps(int &a, int &b){
      int t = a;
          a = b;
          b = t;

}

int main(){
  int intOne;
  int &rSomeRef = intOne;

  intOne = 5;
  cout<<"intOne:\t"<<intOne<<endl;
  cout<<"rSomeRef:\t"<<rSomeRef<<endl;

  int intTwo = 8;
    rSomeRef = intTwo;

  cout<<"intOne:\t"<<intOne<<endl;
  cout<<"intTwo:\t"<<intTwo<<endl;
  cout<<"rSomeRef:\t"<<rSomeRef<<endl;

  int x,y;
  x = 12;
  y = 32;

  cout<<"x: "<<x<<endl;
  cout<<"y: "<<y<<endl;

  swaps(x,y);

  cout<<"x: "<<x<<endl;
  cout<<"y: "<<y<<endl;

   return 0;
}
