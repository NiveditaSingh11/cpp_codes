#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val=data;
        next= NULL;
    }
};
void insertAtHead(Node* &head,int val){
    Node * new_node=new Node (val);
    new_node->next=head;
    head=new_node;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int getLength(Node* head){
    Node* temp=head;
    int length =0;

    while(temp!= NULL){
        length++;
        temp=temp->next;
    }

    return length;
}
Node* moveheadbyk(Node *head , int k){
    Node* ptr=head;
    while(k--){
        ptr=ptr->next;
    }
    return ptr;

}
Node *getIntersection(Node *head1,Node* head2){
    Node* ptr1;
    Node* ptr2; 
    //calculate lengths of both linked lists
    int l1= getLength(head1);
    int l2= getLength(head2);

    //find difference of length =k of linked lists and move longer ll pointer by k steps

    if(l1>l2){
        int k= l1-l2;
       ptr1= moveheadbyk(head1,k);
       ptr2=head2;
    }
    else{
        int k=l2-l1;
        ptr1=head1;
        ptr2=moveheadbyk(head2,k);
    }

    while(ptr1 != NULL){ //ptr1 aur ptr2 ab null se equidistant hai isliye bas ek hi condition true hai!!
        if(ptr1==ptr2){
            return ptr1;
        }
        else{
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
    }
    return NULL;
}

int main (){
    Node* head1=NULL;
    Node* head2=NULL;
    insertAtHead(head1,1);
    insertAtHead(head1,2);
    insertAtHead(head1,3);
    insertAtHead(head1,4);
    insertAtHead(head1,5);
   // insertAtHead(head1,6);

    display(head1);

    insertAtHead(head2,6);
    insertAtHead(head2,7);
    insertAtHead(head2,9);
    display(head2);

    head1->next->next=head2->next;

    Node* intersection =getIntersection(head1 ,head2);
    if(intersection!=NULL){
        cout<<intersection->val;
    }
    else{
        cout<<"no intersection!!";
    }
    return 0;
}