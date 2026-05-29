#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool reverseArr(int j, int n,string &s);

int main(){
    int n,i=0;
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    n=s.size();
    bool result = reverseArr(i,n,s);
    if(result==1){
        cout<<"is palimdrome";
    }else{
        cout<<"not palimdrome";
    }
    return 0;
}

bool reverseArr(int i,int n,string &s){  
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return reverseArr(i+1,n,s);
}
