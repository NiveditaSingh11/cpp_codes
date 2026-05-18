#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node{ //template class
public:

    T val;
    Node* next;

    Node(T data){
        val=data;
        next=NULL;
    }
};

int main(){

    Node<int> node1(3);
    Node<int>* node2= new Node<int> (5);
    Node<char>* node3= new Node<char> ('b ');
    cout<<node1.val<<endl<<node2->val<<node3->val;

    return 0;
}