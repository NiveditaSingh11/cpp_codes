#include <iostream>
#include <string>
using namespace std;

#define MAX 100

// =====================================================
// STACK FOR CHARACTER / STRING OPERATIONS
// =====================================================

class Stack {
private:
    string arr[MAX];
    int topIndex;

public:

    Stack() {
        topIndex = -1;
    }

    void push(string x) {
        if (topIndex == MAX - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }

        topIndex++;
        arr[topIndex] = x;
    }

    string top() {
        if (topIndex == -1) {
            return "";
        }

        return arr[topIndex];
    }

    void pop() {
        if (topIndex == -1) {
            return;
        }

        topIndex--;
    }

    bool empty() {
        return topIndex == -1;
    }
};


// =====================================================
// CHECK OPERAND
// =====================================================

bool isOperand(char ch) {

    if ((ch >= 'A' && ch <= 'Z') ||
        (ch >= 'a' && ch <= 'z') ||
        (ch >= '0' && ch <= '9')) {
        return true;
    }

    return false;
}


// =====================================================
// PRECEDENCE
// =====================================================

int precedence(char ch) {

    if (ch == '^')
        return 3;

    if (ch == '*' || ch == '/')
        return 2;

    if (ch == '+' || ch == '-')
        return 1;

    return 0;
}


// =====================================================
// REVERSE STRING - OUR OWN FUNCTION
// =====================================================

string reverseString(string str) {

    string result = "";

    for (int i = str.length() - 1; i >= 0; i--) {
        result = result + str[i];
    }

    return result;
}


// =====================================================
// SWAP BRACKETS
// =====================================================

string swapBrackets(string str) {

    for (int i = 0; i < str.length(); i++) {

        if (str[i] == '(')
            str[i] = ')';

        else if (str[i] == ')')
            str[i] = '(';
    }

    return str;
}


// =====================================================
// 1. INFIX TO POSTFIX
// =====================================================

string infixToPostfix(string infix) {

    Stack st;

    string postfix = "";

    for (int i = 0; i < infix.length(); i++) {

        char ch = infix[i];

        // Operand
        if (isOperand(ch)) {
            postfix = postfix + ch;
        }

        // Opening bracket
        else if (ch == '(') {
            st.push("(");
        }

        // Closing bracket
        else if (ch == ')') {

            while (!st.empty() && st.top() != "(") {

                postfix = postfix + st.top()[0];
                st.pop();
            }

            if (!st.empty())
                st.pop();
        }

        // Operator
        else {

            while (!st.empty() &&
                   st.top() != "(" &&
                   (precedence(st.top()[0]) > precedence(ch) ||
                   (precedence(st.top()[0]) == precedence(ch)
                    && ch != '^'))) {

                postfix = postfix + st.top()[0];
                st.pop();
            }

            st.push(string(1, ch));
        }
    }

    // Empty the stack
    while (!st.empty()) {

        postfix = postfix + st.top()[0];
        st.pop();
    }

    return postfix;
}


// =====================================================
// 2. INFIX TO PREFIX
// =====================================================

string infixToPrefix(string infix) {

    // Step 1: Reverse
    string rev = reverseString(infix);

    // Step 2: Swap brackets
    rev = swapBrackets(rev);

    Stack st;

    string postfix = "";

    for (int i = 0; i < rev.length(); i++) {

        char ch = rev[i];

        // Operand
        if (isOperand(ch)) {
            postfix = postfix + ch;
        }

        // Opening bracket
        else if (ch == '(') {
            st.push("(");
        }

        // Closing bracket
        else if (ch == ')') {

            while (!st.empty() && st.top() != "(") {

                postfix = postfix + st.top()[0];
                st.pop();
            }

            if (!st.empty())
                st.pop();
        }

        // Operator
        else {

            /*
                Special condition for prefix conversion.

                For ^, equal precedence is popped.
                For +,-,*,/, equal precedence is NOT popped.
            */

            while (!st.empty() &&
                   st.top() != "(" &&
                   (precedence(st.top()[0]) > precedence(ch) ||
                   (precedence(st.top()[0]) == precedence(ch)
                    && ch == '^'))) {

                postfix = postfix + st.top()[0];
                st.pop();
            }

            st.push(string(1, ch));
        }
    }

    // Empty stack
    while (!st.empty()) {

        postfix = postfix + st.top()[0];
        st.pop();
    }

    // Step 3: Reverse postfix
    string prefix = reverseString(postfix);

    return prefix;
}


// =====================================================
// 3. PREFIX TO INFIX
// =====================================================

string prefixToInfix(string prefix) {

    Stack st;

    // Scan from RIGHT to LEFT
    for (int i = prefix.length() - 1; i >= 0; i--) {

        char ch = prefix[i];

        // Operand
        if (isOperand(ch)) {

            st.push(string(1, ch));
        }

        // Operator
        else {

            string operand1 = st.top();
            st.pop();

            string operand2 = st.top();
            st.pop();

            string expression =
                "(" + operand1 + ch + operand2 + ")";

            st.push(expression);
        }
    }

    return st.top();
}


// =====================================================
// 4. PREFIX TO POSTFIX
// =====================================================

string prefixToPostfix(string prefix) {

    Stack st;

    // Scan RIGHT to LEFT
    for (int i = prefix.length() - 1; i >= 0; i--) {

        char ch = prefix[i];

        // Operand
        if (isOperand(ch)) {

            st.push(string(1, ch));
        }

        // Operator
        else {

            string operand1 = st.top();
            st.pop();

            string operand2 = st.top();
            st.pop();

            string expression =
                operand1 + operand2 + ch;

            st.push(expression);
        }
    }

    return st.top();
}


// =====================================================
// 5. POSTFIX TO INFIX
// =====================================================

string postfixToInfix(string postfix) {

    Stack st;

    // Scan LEFT to RIGHT
    for (int i = 0; i < postfix.length(); i++) {

        char ch = postfix[i];

        // Operand
        if (isOperand(ch)) {

            st.push(string(1, ch));
        }

        // Operator
        else {

            string operand2 = st.top();
            st.pop();

            string operand1 = st.top();
            st.pop();

            string expression =
                "(" + operand1 + ch + operand2 + ")";

            st.push(expression);
        }
    }

    return st.top();
}


// =====================================================
// 6. POSTFIX TO PREFIX
// =====================================================

string postfixToPrefix(string postfix) {

    Stack st;

    // Scan LEFT to RIGHT
    for (int i = 0; i < postfix.length(); i++) {

        char ch = postfix[i];

        // Operand
        if (isOperand(ch)) {

            st.push(string(1, ch));
        }

        // Operator
        else {

            string operand2 = st.top();
            st.pop();

            string operand1 = st.top();
            st.pop();

            string expression =
                ch + operand1 + operand2;

            st.push(expression);
        }
    }

    return st.top();
}


// =====================================================
// MAIN
// =====================================================

int main() {

    string infix = "A+B*C";

    cout << "Infix       : " << infix << endl;

    cout << "Postfix     : "
         << infixToPostfix(infix) << endl;

    cout << "Prefix      : "
         << infixToPrefix(infix) << endl;


    string prefix = "+A*BC";

    cout << "\nPrefix      : " << prefix << endl;

    cout << "Infix       : "
         << prefixToInfix(prefix) << endl;

    cout << "Postfix     : "
         << prefixToPostfix(prefix) << endl;


    string postfix = "ABC*+";

    cout << "\nPostfix     : " << postfix << endl;

    cout << "Infix       : "
         << postfixToInfix(postfix) << endl;

    cout << "Prefix      : "
         << postfixToPrefix(postfix) << endl;


    return 0;
}