void deletionAtStart(Node* &head ){
    Node* temp=head;

    Node* tail=head;
    while(tail->next != head){
        tail=tail->next;
    }//tail is pointng at last node !!
    head=head->next;
    tail=head->next;

    delete temp;
}