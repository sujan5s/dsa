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
    int target =9;
    int i=0,j=n-1;
    
    if(arr[i]+arr[j]==target){
        cout<<arr[i]<<" and "<<arr[j]<<" are the elements "<<endl;
    }
    else if(arr[i]+arr[j]>target){
        j--;
    }
    else if(arr[i]+arr[j]<target){
        i++;
    }
    else{
        cout<<"not found"<<endl;
    }

}