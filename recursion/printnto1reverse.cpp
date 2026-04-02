#include<iostream>
using namespace std;

int revPrint(int n, int i=1);

int main(){
    int n,i=1;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    revPrint(n,i=1);
}

int revPrint(int n,int i){
    if(n>=i){
        cout<<n<<endl;
        revPrint(n-1,i);
    }
    return 0;
}