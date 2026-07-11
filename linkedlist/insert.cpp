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

Node* insertK ( Node* head,int val,int k){
    if(head==NULL){
        return new Node(val);
    }
    if(k==1){
        Node* temp = new Node(val,head);
        return temp;
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==k-1){
            Node* x = new Node(val);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
    return head;
}