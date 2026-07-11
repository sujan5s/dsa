Node* insertHead(Node* head,int val){
    Node* temp = new Node(val,head);
    return temp;
}

Node* insertTail ( Node* head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}