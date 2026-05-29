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
    int sum=0,maxi=INT_MIN,anss=0,ansl=0,start=0;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum=sum+arr[i];

        if(sum>maxi){
            maxi=sum;
            anss=start;
            ansl=i;
        }

        if(sum<0){
            sum=0;
        }
    }
    cout<<"maximum = "<<maxi<<endl;
    for(int i=anss;i<=ansl;i++){
        cout<<arr[i]<<endl;
    }
}