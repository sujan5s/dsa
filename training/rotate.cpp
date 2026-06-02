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
    int temp[20];
    int i=0,j=n-1;
    while(i<n){
        temp[i]=arr[j];
        i++;
        j--;
    }
    cout<<"reversed"<<endl;
    for(int i=0;i<n;i++){
        cout<<temp[i]<<endl;
    }
    
}