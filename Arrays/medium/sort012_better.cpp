#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sortBetter(vector<int> a,int n);

int main(){
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sortBetter(a,n);
}

int sortBetter(vector<int> a,int n){
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt0++;
        }
        else if(a[i]==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }
    for (int i=0;i<cnt0;i++){
        a[i]=0;
    }
    for(int i=cnt0;i<cnt1+cnt0;i++){
        a[i]=1;
    }
    for(int i=cnt0+cnt1;i<n;i++){
        a[i]=2;
    }
    cout<<"Sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}