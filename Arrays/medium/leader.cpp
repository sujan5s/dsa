#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void leader(int arr[],int n);

int main(){
    int arr[20];
    int n;
    cout<<"ENter the vbalue of n"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leader(arr,n);
}

void leader(int arr[],int n){
    vector<int> temp;
  
    for(int i=0;i<n;i++){
          int leader=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                leader=0;
                break;
            }
        }
        if(leader==1){
            temp.push_back(arr[i]);
        }
    }
    cout<<"leaders are : "<<endl;
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
}