#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int InsertionSort(int a[],int n);

int main(){
    int a[10],n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    InsertionSort(a,n);
}

int InsertionSort(int a[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j-1],a[j]);
            j--;
        }
    }
    cout<<"sorted array :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}