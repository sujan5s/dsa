#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10],b[10],n,m;
    cout<<"Enter the size of array 1"<<endl;
    cin>>n;
    cout<<"Enter the array 1:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the size of array 2"<<endl;
    cin>>m;
    cout<<"Enter the array 2:"<<endl;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    cout<<"Array 1 :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<"Array 2 :"<<endl;
    for(int i=0;i<m;i++){
        cout<<a[i];
    }
    Union(a,b,n,m);
}

int Union(int a,int b,int n, int m){
    set <int> st;
    for(int i=0;i<n;i++){
        set.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        set.insert(b[i]);
    }
    cout<<st[i];
}