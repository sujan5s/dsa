#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[20];
    int n;
    cout<<"ENter the vbalue of n"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
        if(mpp[arr[i]]>n/2){
        cout<<"majority is :"<<arr[i];
    }cout<<"no majority found"<<endl;
    }
    
}