#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subString(int st,int end,string name){
    bool flag=1;
    if(st==end){
        flag==0;
    }
    if(flag==0){
        cout<<"string is empty";
    }else{
        cout<<"not empty";
    }
}

bool boolString(string name){
    if(name.empty()){
        cout<<"empty";
        return false;
    }
    cout<<"not empty";
    return true;
}

string strFind(string name,string target){
    int flag=1;
    for(int i=0;i<name.size();i++){
        if(name[i]!=target){
            flag=0;
        }
    }
    if(flag==0){
        cout<<"Not found";
    }
    cout<<"found";
}

int main(){
    string name="",dept,classroom;
    cout<<"enter name ,dept ,class"<<endl;
    getline(cin,name);
    getline(cin,dept);
    getline(cin,classroom);
    cout<<"name :"<<name<<endl<<"dept :"<<dept<<endl<<"Classroom :"<<classroom<<endl;
    /*subString( st, end, name);*/
    //boolString(name);
    string target='u';
    strFind(name,target);

}