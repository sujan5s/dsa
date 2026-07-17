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

Node* DK(Node* head,int k){
    int crt = 0;
    Node* temp = head;
    while(temp!=NULL){
        crt++;
        if(crt==k){
            break;
        }
        temp= temp->next;
    }
    Node* prev = temp->back;
    Node* next = temp->next;
    if(prev==NULL && next==NULL){
        delete head;
        return NULL;
    }
    if(prev == NULL){
        head=head->next;
        delete temp;
        return head;
    }
    if(next==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return head;
    }
    prev->next=next;
    next->back=prev;
    delete temp;
    delete temp;
    return head;
}

int main(){
    vector<int> arr = {2,5,8,7};
    Node* head = convertArrToDll(arr);
    head=DK(head,2);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
