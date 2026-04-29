#include <bits/stdc++.h>
using namespace std;
int removeBrackets(string str){
    stack<char> st;
    int count=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            st.push(')');
        }

        else{
            if(!st.empty()) st.pop();

            else count++;
        }
    }

    return count + st.size();
}
int main(){
    string str = "(()))(()";

    int result = removeBrackets(str);

    cout << "Unmatched brackets: " << result << endl;

    return 0;
}
