#include<iostream>
#include<vector>
using namespace std;

double average(const vector<double>&arr){
        double sum = 0;
        for(unsigned i=0;i<arr.size();i++)
            sum+=arr[i];
        return sum/arr.size();

}


int main(){
    unsigned n;
    cout<<"n= ";
    cin>>n;

    vector<double>arr(n);
    cout<<"输入"<<n<<"个元素：";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"平均值："<<average(arr)<<endl;

return 0;
}
