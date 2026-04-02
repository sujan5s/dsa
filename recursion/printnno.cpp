#include<iostream>
using namespace std;

void printName(int n, string name);

int main(){
    int n;
    string name;
    cout<<"Enter the name = "<<endl;
    cin>>name;
    cout<<"Enter the no. time you want to repeat"<<endl;
    cin>>n;
    printName(n,name);
    return 0;
}

void printName(int n,string name){
    if(n==0){
        return;
    }else{
        cout<<name<<endl;
        printName(n-1,name);
    }
}