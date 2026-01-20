#include<iostream>
using namespace std;
int main(){
    int x,armno=0,temp;
    cout<<"Enter a number :"<<endl;
    cin>>x;
    temp=x;
    while(x!=0){
        int m=x%10;
        armno=armno+(m*m*m);
        x=x/10;
    }
    if(temp==armno){
        cout<<"It is an armstrong no"<<endl;
    }
    else{
        cout<<"It is not an armstrong no"<<endl;
    }
}