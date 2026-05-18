#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node *next;

    Node(int data){
        val=data;
        next=NULL;
    }
};

void insertAtHead(Node* &head,int val){
    Node *new_node =new Node(val);
    new_node->next=head;
    head=new_node;
}

void display(Node* &head){
    Node * temp =head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp =temp->next;
    }
    cout<<"NULL"<<endl;
}

bool checkEqualLL(Node *head1 ,Node *head2){
        Node* ptr1 =  head1;
        Node* ptr2 = head2;

        while(ptr1 !=NULL && ptr2!=NULL){
            if(ptr1->val != ptr2->val){
                return false;
            }

            ptr1 = ptr1->next;
            ptr2 = ptr2->next;

        }
        return (ptr1==NULL && ptr2==NULL);
}
int main(){
    Node* head1=NULL;
    Node* head2=NULL;

    insertAtHead(head1,2);
    insertAtHead(head1,3);
    insertAtHead(head1,5);
    insertAtHead(head1,4);
    insertAtHead(head1,8);
    insertAtHead(head1,9);

    display(head1);

    insertAtHead(head2,2);
    insertAtHead(head2,3);
    insertAtHead(head2,5);
    insertAtHead(head2,5);
    insertAtHead(head2,8);
    insertAtHead(head2,9);

    display(head2);
    if (checkEqualLL(head1,head2)){
        cout<<"the given linked lists are equal"<<endl;
    }
    else{
         cout<<"the given linked lists are not equal"<<endl;
    }
    
    return 0;
}