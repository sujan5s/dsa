#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printFull(int n);
void printHalf(int n);

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            printFull(n);
        }
        else{
        printHalf(n);
        }
    }   
}
void printFull(int n){
 for(int i=1;i<=n;i++){
    cout<<"*";
 }
 cout<<endl;
}
void printHalf(int n){
    for(int i=1;i<=n;i++){
        if(i==1 || i==n){
            cout<<"*";
        }
        cout<<" ";
    }
    cout<<endl;
}
