#include<iostream>

using namespace std;


void rowSum(int a[][4], int nRow){
      for(int i=0; i<nRow; i++){
        for(int j=1; j<4; j++)
            a[i][0]+=a[i][j];
      }
}


void had(int a[5], int num){
     int i;
     for(i=0;i<num;i++)
        a[i]++;
}


int main(){

  int table[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
  int b[5] = {1,23,45,67,17};
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++)
       cout<<table[i][j]<<"  ";
     cout<<endl;
  }

 rowSum(table,3);
 for(int i=0;i<3;i++)
    cout<<"Sum of row  "<<i<<"  is "<<table[i][0]<<endl;

cout<<endl;

had(b,5);
for(int k=0;k<5;k++)
    cout<<b[k]<<" ";

 return 0;
}
