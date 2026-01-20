#include <iostream>
using namespace std;

int secondLargest(int arr[],int n){
    int lar,seclar,temp;
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    lar=arr[n-1];
    for(int i=n-1;i>=0;i--){
        if(arr[i]==arr[i-1]){
            continue;
        }else{
            seclar=arr[i-1];
            return seclar;
        }
        
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
    ans=secondLargest(a,n);
    cout<<"output:"<<ans;
    return 0;
}