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

void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next=head;
    head=new_node;
}

void display(Node* &head){
    Node *temp=head;
    while(temp !=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* mergeLinkedList(Node* &head1 , Node* &head2){
    Node* dummyHeadNode= new Node(-1); 
    Node* ptr1=head1;
    Node* ptr2=head2;
    Node* ptr3=dummyHeadNode;
    while(ptr1 && ptr2){
        if(ptr1->val < ptr2->val){
            ptr3->next=ptr1;
            ptr1 =ptr1->next;
        }

        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
        }
        
        ptr3=ptr3->next;
    }

    if(ptr1){
        ptr3->next=ptr1;
    }

    else{
        ptr3->next=ptr2;
    }

    return dummyHeadNode->next;
}

int main(){
    Node* head1=NULL;
    Node * head2=NULL;

    insertAtHead(head1,5);
    insertAtHead(head1,4);
    insertAtHead(head1,1);
    display(head1);
    insertAtHead(head2,3);
    insertAtHead(head2,2);
    display(head2);

    Node* headOfNewSortedLL = mergeLinkedList(head1,head2);

    display(headOfNewSortedLL);
    return 0;
}