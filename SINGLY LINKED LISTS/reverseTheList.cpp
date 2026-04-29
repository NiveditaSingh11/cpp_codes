 #include <bits/stdc++.h>
 using namespace std;
 class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        next =NULL;
        val=data;
    }
 };

void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next=head;
    head=new_node;
}

void display(Node* &head){
    Node *temp =head;

    while(temp !=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void reverseWholeList(Node* &head){
    Node* prev =NULL;
    Node* curr=head;

    while(curr != NULL){
        Node* nextptr= curr->next;
        curr->next =prev;
        prev = curr;
        curr = nextptr;
    }
    head=prev;
}
 int main(){
    Node* head= NULL;
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,8);
    insertAtHead(head,9);
    display(head);
    reverseWholeList(head);
    display(head);
    return 0;
 }