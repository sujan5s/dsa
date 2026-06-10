#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

class Queue
{
    public:
        vector<int> v;
        void pushV(int x){
            v.push_back(x);
        }
        void reverseV(){
            vector<int> temp;
            while(!v.empty()){
                temp.push_back(v.back());
                v.pop_back();
            }
            cout<<"Revered : ";
            for(int x : temp){
                cout<<x<<" ";
            }
        }
};

int main(){
    Queue q;
    int n,x;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the value to be entered into queue"<<endl;
    for(int i=0;i<n;i++){
        cin>>x;
        q.pushV(x);
    }
    q.reverseV();
}

