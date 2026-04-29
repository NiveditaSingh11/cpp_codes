#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isIsomorphic(const string &s , const string &t){
    if(s.length() != t.length()) return false;

    vector <int> freq1(128,-1);
    vector <int> freq2(128 ,-1);

    for(int i=0; i<s.length();i++){
        if(freq1[s[i]] != freq2[t[i]]) {// checking if value of character at idx i matches in both strings            
            return false;
        }
        freq1[s[i]] = freq2[t[i]] = i; //storing string position in vector for character at idx i
    }

    return true;

}
int main(){
    string s;
    cout<<"enter the string s :";
    cin>>s;
    string t;
    cout<<"enter the string t :";
    cin>>t;
    
    if (isIsomorphic(s,t)){
        cout<<"they are isomorphic";
    }
  else{
        cout<<"they are not isomorphic";
    }
    return 0;

}
