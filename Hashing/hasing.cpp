#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int main(){
    int n,a[10];
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"enter the array elements"<<endl;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    //precalculation
    int hash[10] = {0};
    for (int i=0;i<n;i++){
        hash[a[i]] +=1;
    }
    int number;
    cout<<"Enter the number to find the count "<<endl;
    cin>>number;
    cout<<"count = "<<hash[number]<<endl;
}