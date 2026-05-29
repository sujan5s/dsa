#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cout<< " Enter the n"<<endl;
    cin>>n;
    vector<int> a;
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int start =0,end=n-1;
    while(start<end){
        int temp = a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        
    }
}