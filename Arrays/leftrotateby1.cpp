#include <iostream>
using namespace std;

int leftrotate(int arr[],int n){
    int temp=arr[0];
    for (int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}

int main(){
    int n,a[10],ans;
    cout<<"Enter a size of array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ans=leftrotate(a,n);
    return 0;
}