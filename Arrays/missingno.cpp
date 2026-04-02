#include<iostream>
using namespace std;

int missing(int a[10],int n){
    int t=0,ans=0,m=0; 
    t=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        ans = ans+a[i];
    }
    m=t - ans;
    cout<<"missing value is = "<<m<<endl;
}

int main(){
    int n,a[10],ans;
    cout<<"Enter a size of array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ans=missing(a,n);
    return 0;
}