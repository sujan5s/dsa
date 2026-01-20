#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter a number :"<<endl;
    cin>>n;
    while(n>0){
        int m=n%10;
        n=n/10;
        count++;
    }
    cout<<"The number of digits in the given number is : "<<count<<endl;
}

/*this is extraction of digits concept*/

/*time complexity
    O(log(base 10) n) where n is the number whose digits are to be counted
*/