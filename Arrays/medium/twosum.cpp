#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int twoSum(vector<int>& a,int n,int target);

int main(){
    int n,target;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the target sum : "<<endl;
    cin>>target;
    twoSum(a,n,target);
}

int twoSum(vector<int>& a,int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]+a[j]==target){
                cout<<a[i]<<" + "<<a[j]<<" = "<<target<<endl;
            } 
        }
    }
}