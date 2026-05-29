#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void quickSort(vector<int>& a,int low,int high);
int funt(vector<int>& a,int low,int high);

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
    quickSort(a,low,high);
    for(int i = 0; i < n; i++){
    cout << a[i] << " ";
    }
}

void quickSort(vector<int>& a,int low,int high){
    if(low<high){
        int partition=funt(a,low,high);
        quickSort(a,low,partition-1);
        quickSort(a,partition+1,high);
    }
}

int funt(vector<int>& a,int low,int high){
    int pivot=a[low];
    int i=low,j=high;
    while(i<j){
        while(a[i]<=pivot && i<=high-1){
            i++;
        }
        while(a[j]>=pivot && j>=low+1 ){
            j--;
        }if(i<j){
        swap(a[i],a[j]);
        }
    }
    swap(a[low],a[j]);
    return j;
}