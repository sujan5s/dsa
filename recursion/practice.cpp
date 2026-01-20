#include<iostream>
using namespace std;
void print(char a[],int n){
    for(int i=0;i<n;i++){
        cout<<a<<endl;
    }
    return;
}
int main(){
    char a[100];
    int n;
    cout<<"Enter a string :"<<endl;
    cin>>a;
    cout<<"Enter number of times to print :"<<endl;
    cin>>n;
    print(a,n);
    return 0;
}