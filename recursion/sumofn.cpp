#include<iostream>
using namespace std;

int sumNo(int n, int i,int sum);

int main(){
    int n,i=1,sum=0;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    sumNo(n,i,sum);
}

int sumNo(int n,int i,int sum){
    if(i>n){
        cout<<"sum="<<sum<<endl;
        return sum;
    }
    sum += i;
    sumNo(n,i+1,sum);
}