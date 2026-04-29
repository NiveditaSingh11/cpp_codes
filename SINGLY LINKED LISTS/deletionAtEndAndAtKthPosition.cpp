#include <bits/stdc++.h>
using namespace std;
class Node{
    public:

    int val;
    Node* next;

    Node(int data){
        val =data;
        next=NULL;
    }
};

void insertAtHead(Node* &head,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head =new_node;
}

void display(Node* &head){
    Node* temp= head;
    while(temp!= NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void deletionAtHead(Node* &head){
    Node* temp=head; //node to be deleted
    head =head->next;
    free(temp); // frees the memory occupied by this temp pointer !!
}

void deletionAtTail(Node* &head){
    Node* second_last=head;
    while(second_last->next->next !=NULL){
        second_last = second_last->next;
    }
    //now second_last points to second last position!!
    Node*temp= second_last->next;
    second_last->next = NULL;
    free(temp);
}

void deletionAtKthPosition(Node* &head, int pos){
    if(pos==0){
        deletionAtHead(head);
        return;
    }
    int curr_pos =0;
    Node* prev =head;
    while(curr_pos !=pos-1){
        prev= prev->next;
        curr_pos++;
    }
    //prev is pointing on pos-1
    Node* temp = prev->next;//node to be deleted
    prev->next=prev->next->next;
    free(temp);
}
int main(){
     Node* head=NULL;
    insertAtHead(head , 2);
    display (head);
    insertAtHead(head ,5);
    display(head);
    insertAtHead(head ,6);
    display(head);
    insertAtHead(head ,7);
    display(head);
    insertAtHead(head ,10);
    display(head);
    insertAtHead(head ,25);
    display(head);
    deletionAtTail(head);
    display (head); 
    deletionAtKthPosition(head,3);
    display(head);
    return 0;
}