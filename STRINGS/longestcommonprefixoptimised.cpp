#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string longestCommonPrefix(vector<string> &str){

    // keeping first string as constant and comparing it with others 

    string s1= str[0];
    int ans_length =s1.size();
    for(int i=0; i<str.size();i++){
        int j=0;
        while(j<s1.size() &&j<str[i].size() &&s1[j]==str[i][j]){
            j++;
        }

             ans_length = min(j,ans_length);
    }

string ans= s1.substr(0, ans_length);
return ans;
}
int main(){
    int n;
    cout<<"enter the number of strings :";
    cin>>n;

    cout<<"enter the strings !!"<<endl;
    vector <string> str(n);
    for(int i=0;i<n;i++){
        cout<<"enter the"<<i+1<<"th string:";
        cin >> str[i];
    }

    cout<<"Longest common prefix :"<<longestCommonPrefix(str)<<endl;
    return 0;
}