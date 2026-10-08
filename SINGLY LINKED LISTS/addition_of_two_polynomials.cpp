#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int coeff;
    int power;
    Node* next;

    Node(int c, int p) {
        coeff = c;
        power = p;
        next = NULL;
    }
};

// Insert a term at the tail
void insertAtTail(Node* &head, int coeff, int power) {

    Node* new_node = new Node(coeff, power);

    if (head == NULL) {
        head = new_node;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
}

// Add two polynomials
Node* addPolynomial(Node* p1, Node* p2) {

    Node* result = NULL;

    while (p1 != NULL && p2 != NULL) {

        // Same powers
        if (p1->power == p2->power) {
            int sum = p1->coeff + p2->coeff;

            if (sum != 0) {
                insertAtTail(result, sum, p1->power);
            }

            p1 = p1->next;
            p2 = p2->next;
        }

        // Power of p1 is greater
        else if (p1->power > p2->power) {

            insertAtTail(result, p1->coeff, p1->power);

            p1 = p1->next;
        }

        // Power of p2 is greater
        else {

            insertAtTail(result, p2->coeff, p2->power);

            p2 = p2->next;
        }
    }

    // Remaining terms of p1
    while (p1 != NULL) {

        insertAtTail(result, p1->coeff, p1->power);

        p1 = p1->next;
    }

    // Remaining terms of p2
    while (p2 != NULL) {

        insertAtTail(result, p2->coeff, p2->power);

        p2 = p2->next;
    }

    return result;
}

// Display polynomial
void display(Node* head) {

    Node* temp = head;

    while (temp != NULL) {

        cout << temp->coeff << "x^" << temp->power;

        if (temp->next != NULL) {
            cout << " + ";
        }

        temp = temp->next;
    }

    cout << endl;
}

int main() {

    Node* p1 = NULL;
    Node* p2 = NULL;
    Node* result = NULL;

    // First polynomial:
    // 5x^3 + 4x^2 + 2x + 1

    insertAtTail(p1, 5, 3);
    insertAtTail(p1, 4, 2);
    insertAtTail(p1, 2, 1);
    insertAtTail(p1, 1, 0);

    // Second polynomial:
    // 3x^3 + 2x^2 + 4

    insertAtTail(p2, 3, 3);
    insertAtTail(p2, 2, 2);
    insertAtTail(p2, 4, 0);

    cout << "First Polynomial: ";
    display(p1);

    cout << "Second Polynomial: ";
    display(p2);

    result = addPolynomial(p1, p2);

    cout << "Sum: ";
    display(result);

    return 0;
}