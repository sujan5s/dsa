#include<iostream>
using namespace std;

int linearsearch(int a[],int n){
    int k;
    cout<<"Enter the key element to be searched"<<endl;
    cin>>k;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            cout<<k<<" is found at position "<<i+1<<endl;
        }
    }
}

int main(){
    int a[10],n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    linearsearch(a,n);
}
