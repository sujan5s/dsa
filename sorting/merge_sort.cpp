#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void mergeSort(vector<int>& a, int low, int high);
void merge(vector<int>& a, int low, int mid, int high);


int main(){
    int n,low,high;
    
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
    low=0;
    high=n-1;
    mergeSort(a,low,high);
    for(int i = 0; i < n; i++){
    cout << a[i] << " ";
}
}

void mergeSort(vector<int>& a,int low,int high){
    if(low>=high){
        return;
    }
    int mid=(high+low)/2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
    
}
void merge(vector<int>& a,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(a[left]<a[right]){
            temp.push_back(a[left]);
            left++;
        }else{
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(a[left]);
        left++;
    }
    while (right<=high){
       temp.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i]=temp[i-low];
    }
}