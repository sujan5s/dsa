#include<iostream>
using namespace std;
int main(){
    int n,revNum=0,temp;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    temp=n;
    while(n!=0){
        int m=n%10;
        revNum=(revNum*10)+m;
        n=n/10;
    }
    cout<<"Reverse of no is : "<<revNum<<endl;
    if(temp==revNum){
        cout<<"It is a palindrome no"<<endl;
    }
    else{
        cout<<"It is not a palindrome no"<<endl;
    }
}