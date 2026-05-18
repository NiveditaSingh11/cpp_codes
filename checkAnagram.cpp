#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1 , string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    unordered_map<char ,int> m;
    for(auto c1: s1){
        m[c1]++; // for storing frequency of each character in the string s1 
    }
    
    for(auto c2: s2 ){
        if(m.find(c2) == m.end()){
            return false;
        }
        else{
            m[c2]--;
        }
    }
    
    for(auto ele: m){
        if(ele.second != 0){
            return false;
        }
    }
    
    return true;
}
int main(){
    string s1,s2;
    cout<<"enter the first string :";
    cin >>s1;
    cout<<"enter the second string :";
    cin>>s2;
    
    if(checkAnagram(s1,s2)){
        cout<<"yes";
    }
    
    else{
        cout<<"no";
    }
    return 0;
    
}  