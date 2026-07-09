#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
        int data;
        Node* next;

    Node (int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node (int data1){
        data=data1;
        next=nullptr;
    }
};

Node* arrToLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* removeK(Node* head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        Node* temp = head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=1;
    Node* temp = head;
    Node* prev=NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head
}

int main(){
    vector<int> arr = {2,5,8,7};
    Node* y = new Node(arr[0],nullptr);
    Node* head = arrToLL(arr);
    
    //head=Delete(head);
    deleteTail(head);
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
