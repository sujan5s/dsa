#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int zerotoend(vector<int> arr,int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[i]=temp[i];
        }
    }
    for(int i=0;i<temp.size();i++){
        temp[i]=arr[i];
    }
    for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }
}

int main(){
    int n,ans;
    vector<int> arr;
    cout<<"Enter a size of array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ans=zerotoend(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}