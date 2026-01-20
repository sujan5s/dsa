#include <iostream>
using namespace std;

int removeDuplicate(int arr[],int n){
    int i=0;
    for (int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n,a[10],ans;
    cout<<"Enter a size of array: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ans=removeDuplicate(a,n);
    cout<<"output:"<<ans;
    return 0;
}