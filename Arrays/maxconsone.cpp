#include<iostream>
#include<algorithm>
using namespace std;

int maxcons(int a[10],int n){
    int i,j,maxi=0,count=0;
    for(i=0;i<n;i++){
        if(a[i]==1){
            count=count+1;
            maxi=max(maxi,count);
        }else if(a[i]==0){
            count=0;
        }
    }
    cout<<"ans="<<maxi;
}

int main(){
    int n,a[10],ans=0;
    cout<<"Enter a size of array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    maxcons(a,n);
    return 0;
}