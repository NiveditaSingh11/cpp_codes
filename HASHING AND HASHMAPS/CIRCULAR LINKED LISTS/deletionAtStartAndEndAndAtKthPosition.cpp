#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next=NULL;
    }
};

void insertAtStart(Node* &head,int val){
    Node* new_node=new Node(val);
    if(head==NULL){
        head=new_node;
        new_node->next=head;
        return;
    }
    Node* tail=head;
    while(tail->next != head){
        tail=tail->next;
    }//tail is pointing to last node

    tail->next=new_node;
    new_node->next=head;
    head=new_node;
}
void display(Node* &head){
    if(head==NULL) return ;
    Node* temp = head;
    do{
        cout<<temp->val<<"->";
        temp=temp->next;
    }while(temp!=head);
}
void deletionAtStart(Node* &head ){
    if (head==NULL) return;

    //single node 
    if(head->next==head){
        delete head;
        head=NULL;
        return;

    }
    Node* temp=head;

    Node* tail=head;
    while(tail->next != head){
        tail=tail->next;
    }//tail is pointng at last node !!
    head=head->next;
    tail->next=head;   
    delete temp;
}
void deletionAtTail(Node* &head){
    if(head==NULL) return ;

    if(head->next==head){
        delete head;
        head=NULL;
        return ;
    }
    Node* tail = head;

    while(tail->next->next !=head){
       tail=tail->next; //tail is pointing to the second last node
    }
    Node* temp=tail->next; //node to be deleted
    tail->next= head;
    delete temp;
}

void deleteAtKthPosition(Node* &head, int pos){

if(pos==0){
    deletionAtStart(head);
    return;
}
int curr_pos=0;
Node* prev=head;
while(curr_pos< pos-1){
    prev=prev->next;
    curr_pos++;
}

Node* temp=prev->next;
prev->next=prev->next->next;
delete temp;

}
int main(){
     Node* head=NULL;
    insertAtStart(head,10);
    insertAtStart(head,8);
    insertAtStart(head,6);
    insertAtStart(head,5);
    insertAtStart(head,7); 
    display(head);
    cout<<endl;
    deleteAtKthPosition(head,3);
    display(head);
    cout<<endl;
    deletionAtStart(head);
    display(head);
    cout<<endl;
    deletionAtTail(head);
    display(head);
    return 0;
}