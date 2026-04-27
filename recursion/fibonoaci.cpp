#include<iostream>
#include<bits\stdc++.h>

using namespace std;

int fibo(int n);

int main(){
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    cout<<"Fibonaci no. of "<<n<<" place is"<<endl;
    int ans = fibo(n);
    cout<<ans;
}

int fibo(int n){
    if(n<=1){
        return n;
    }
    int first = fibo(n-1);
    int second = fibo(n-2);
    return first+second;
}