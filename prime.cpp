#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout << "Enter a number :\n"<< endl;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<n<<" Is not a prime number \n";
            return 0;
        } else {
            cout << n << " Is a prime number \n";
            return 0;
        }
    }
}