#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int SelectionSort(int a[],int n);

int main(){
    int a[10],n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array before sorting :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    SelectionSort(a,n);
}

int SelectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    cout<<"Sorted array :"<<endl;
    for (int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}