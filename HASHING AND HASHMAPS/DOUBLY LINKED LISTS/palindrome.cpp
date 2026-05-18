#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
void insertAtStart(Node* &head,Node* &tail ,int val){
    Node* new_node = new Node(val);
    if(head==NULL){
        head=new_node;
        tail= new_node;
        return ;
    }

    new_node->next=head;
    head->prev=new_node;
    head=new_node;
}
void display(Node* &head){
    Node* temp= head;
    while(temp!= NULL){
        cout<<temp->val<<"<->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}

bool isPalindrome(Node* &head,Node* &tail){
    while(head != tail && tail != head->prev){
        if(head->val != tail->val){
            return false;
        }

        head=head->next;
        tail=tail->prev;
    }
    return true;
}

int main(){
    Node* head= NULL;
    Node* tail=NULL;
    insertAtStart(head,tail,1);
    insertAtStart(head,tail,2);
    insertAtStart(head,tail,4);
    insertAtStart(head,tail,4);
    insertAtStart(head,tail,2);
    insertAtStart(head,tail,1);
    display (head);
    cout<<endl;
     if(isPalindrome){
        cout<<"the doubly linked list is palindrome !!";
     }
     else{
        cout<<"the doubly linked list is not a palindrome !!";
     }
    return 0;
}