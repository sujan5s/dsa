#include<iostream>
using namespace std;
int main(){
    int n,revNum=0;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    while(n>0){
        int m=n%10;
        revNum = (revNum*10)+m;
        n=n/10;
    }
    cout<<"Reverse of no is : "<<revNum<<endl;
}

/*
    for details info notes 
*/