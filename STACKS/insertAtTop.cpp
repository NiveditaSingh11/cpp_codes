#include <bits/stdc++.h>
using namespace std;

void insertAtTop(stack<int> &st, int x) {
    st.push(x);
}

int main() {

    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    insertAtTop(st, 200);

    while (!st.empty()) {
        int curr = st.top();
        st.pop();
        cout << curr << " ";
    }

    return 0;
}