#include<iostream>
#include<bits\stdc++.h>
using namespace std;

int main(){
    string s;
    int hash[26]={0};
    cout<<"Enter the string"<<endl;
    cin>>s;
    char cha;
    cout<<"Enter the count need of char : "<<endl;
    cin>>cha;
    for(int i=0;i<s.size();i++){
        hash[s[i] - 'a'] ++; 
    }
    cout<<"count = " <<hash[cha-'a']<<endl;
}