#include<iostream>
#include<bits/stdc++.h>
using namespace std;

        void rearrange(vector<int> arr,int n){
            int posindex=0,negindex=1;
            vector<int> temp(n,0);
            for(int i=0;i<n;i++){
                if(arr[i]<0){
                    temp[posindex]==arr[i];
                    posindex+=2;
                }else{
                    temp[negindex]==arr[i];
                    negindex+=2;
                }
            }
            for(int i=0;i<n;i++){
                cout<<temp[i];
            }
        }

int main(){
    vector<int> arr;
    int n;
    cout<<"ENter the vbalue of n"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rearrange(arr,n);
}