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
    int low=0,mid=0,high=n-1;
    for(int i=0;i<n;i++){
        if(mid>high){
            break;
        }
        if(a[mid]==0){
            swap(a[low],a[mid]);
            low++,mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }
    cout<<"Sorted array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}