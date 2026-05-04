#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int BubbleSort(int a[],int n);

int main(){
    int a[10],n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    BubbleSort(a,n);
}

int BubbleSort(int a[],int n){
    for (int i=n-1;i>=1;i--){
        for(int j=0;j<=i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    cout<<"After sorting:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}