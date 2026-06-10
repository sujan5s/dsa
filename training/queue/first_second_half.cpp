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
        void split(){
            int n=v.size();
            vector<int> temp;
            for(int i=0;i<n/2;i++){
                temp.push_back(v[i]);
                v.erase(v.begin());
            }

            vector<int> temp2;
            for(int i=0;i<n/2;i++){
                temp2.push_back(temp[i]);
                temp2.push_back(v[i]);
            }
            for(int i : temp2){
                cout<<i<<" ";
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
    q.split();
}

