#include <iostream>
using namespace std;

int secondLargest(int arr[],int n){
    int lar=arr[0];
    int seclar=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>lar){
            seclar=lar;
            lar=arr[i];
        }
        else if(arr[i]<lar && arr[i]>seclar){
            seclar=arr[i];
        }
    }
    return seclar;
    
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