#include <bits/stdc++.h>
using namespace std;

// Previous Smaller Element
vector<int> getPSE(vector<int>& arr) {
    int n = arr.size();
    vector<int> pse(n);
    stack<int> st;

    for(int i = 0; i < n; i++) {
        while(!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        pse[i] = st.empty() ? -1 : st.top();
        st.push(i);
    }
    return pse;
}

// Next Smaller Element
vector<int> getNSE(vector<int>& arr) {
    int n = arr.size();
    vector<int> nse(n);
    stack<int> st;

    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        nse[i] = st.empty() ? n : st.top();
        st.push(i);
    }
    return nse;
}

int largestRectangle(vector<int>& arr) {
    int n = arr.size();

    vector<int> pse = getPSE(arr);
    vector<int> nse = getNSE(arr);

    int ans = 0;

    for(int i = 0; i < n; i++) {
        int width = nse[i] - pse[i] - 1;
        int area = arr[i] * width;
        ans = max(ans, area);
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    cout << largestRectangle(arr) << endl;
    return 0;
}