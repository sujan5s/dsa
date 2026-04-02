#include<iostream>
using namespace std;

int maxcons(int a[10],int n){
    int count;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count==1){
            cout<<"Ans = "<<a[i];
        }
    }
    
}

int main(){
    int n,a[10];
    cout<<"Enter a size of array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    maxcons(a,n);
    return 0;
}