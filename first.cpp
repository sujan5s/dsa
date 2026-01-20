#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout << "Enter a number: \n" << endl;
    cin >> n;
    for(int i=0; i<=n; i++){
        if(i%2==0){
        sum=sum+i;
        }
        else{
        sum=sum ;
        }
    }
    cout << " the sum of odd number is: \n"<<sum<<endl;
    return 0;
}   