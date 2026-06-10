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
        void popV(){
            if(v.empty()){
                cout<<"Queue is empty"<<endl;
            }
            v.erase(v.begin());
            cout<<"Pop successfull";
        }
        void displayV(){
            if(v.empty()){
                cout<<"Queue is empty"<<endl;
            }
            for(int x : v){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        void displayf(){
            cout<<v.size();
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
    q.displayV();
    q.popV();
    q.displayV();
    q.displayf();
}

