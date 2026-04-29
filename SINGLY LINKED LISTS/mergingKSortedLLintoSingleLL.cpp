#include <bits/stdc++.h>
using namespace std;
class Node{
public:
int val;
Node* next;
Node(int data){
    val=data;
    next = NULL;
}
};

void insertAtHead(Node* &head ,int val){
    Node* new_node=new Node(val);
    new_node->next=head;
    head=new_node;
}

void display(Node* & head){
    Node* temp=head;
    while(temp!= NULL){
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
Node* mergeKLinkedLists(vector<Node*> &lists){
    if(lists.size()==0){
        return NULL;
    }
    while(lists.size()>1){
        Node* mergedHead = mergeLinkedList(lists[0],lists[1]);
        lists.push_back(mergedHead);
        lists.erase(lists.begin());
        lists.erase(lists.begin()); 
    }


    return lists[0];
    //vector-> head1 and head2 head3 head4
    //1. head1 & head2 ll will be merged
    //vector->head3 head4 mergedhead 1-2
    //2.head3 and head4 will be merged 
    //vector-> merged1_2 and mergedhead3_4
    //now  merged1_2 and mergedhead3_4 will be merged !! <3
}
int main(){
Node* head1=NULL;
Node* head2=NULL;
Node* head3=NULL;
insertAtHead(head1,8);
insertAtHead(head1,7);
insertAtHead(head1,1);
display(head1);
insertAtHead(head2,5);
insertAtHead(head2,4);
insertAtHead(head2,2);
display(head2);
insertAtHead(head3,6);
insertAtHead(head3,3);
display(head3);
vector<Node*> lists;
lists.push_back(head1);
lists.push_back(head2);
lists.push_back(head3);

Node* result = mergeKLinkedLists(lists);
display(result);

return 0;
}