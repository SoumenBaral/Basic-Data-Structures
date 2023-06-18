 Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail=c;
    
    //connection
    head->next=a;
    a->Previous=head;
    a->next=b;
    b->Previous =a;
    b->next=c;
    c->Previous=b;
