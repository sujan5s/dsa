#include<iostream>
using namespace std;

int reverseArr(int j, int n,int arr[]);

int main(){
    int n,arr[10],j;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array after reverse"<<endl;
    reverseArr(0,n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int reverseArr(int j, int n,int arr[]){
    if(j>n/2){
        return 0;
    }
    int temp;
        temp = arr[j];
        arr[j] = arr[n-j-1];
        arr[n] = temp;
        reverseArr(j+1,n-j-1,arr);
}