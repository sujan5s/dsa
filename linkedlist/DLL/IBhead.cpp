#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* back;

    Node (int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node (int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convertArrToDll(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next= temp;
        prev = temp;
    }
    return head;
}

Node* IBH(Node* head,int val){
    Node* temp = new Node(val,head,nullptr);
    head->back=temp;
    head = head->back;
    return head;
}

Node* IAH(Node* head, int val){
    Node* temp = new Node(val,head->next,head);
    head->next->back=temp;
    head->next=temp;
    return head;
}

int main(){
    vector<int> arr = {2,5,8,7};
    Node* head = convertArrToDll(arr);
    head=IAH(head,9);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
