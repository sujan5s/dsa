#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int leftrotate(int arr[],int n,int d){
    d=d%n;
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int n,a[10],d,ans;
    cout<<"Enter a size of array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the value of d"<<endl;
    cin>>d;
    ans=leftrotate(a,n,d);
    return 0;
}