 #include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next=NULL;
    }
};
void insertAtHead (Node* &head,int val){
    Node* new_node = new Node(val);
    new_node->next=head;
    head= new_node;

}
void insertAtTail(Node* &head, int val){
Node* new_node=new Node(val);

if(head==NULL){
    head= new_node;
    return;
}

Node *temp = head;
  
while(temp->next != NULL){// tab chalega jab temp ka next null hoga
   temp = temp->next;
}

temp->next = new_node;

}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){ 
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head =NULL;
    insertAtTail(head , 7);
    display (head);
    insertAtTail(head ,48);
    display(head);
    return 0;
}