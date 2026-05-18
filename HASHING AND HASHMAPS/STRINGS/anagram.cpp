#include <iostream>
#include <vector>
#include <string>
using namespace std;
string countSort (string s, string t ){

     if(s.length () != t.length())  return "no";

    vector <int> freq1(26,0);  //frequency array for string s
    vector<int> freq2(26,0);

    for(int i=0; i<s.length();i++){
        int idx = s[i]-'a';
        freq1[idx]++;
    }

    for(int i=0; i<t.length();i++){
        int idx= t[i]-'a';
        freq2[idx]++;
    }
    
    if(freq1 == freq2)  return "yes";
    else return "no";
    
   
}
int main(){

    //cout<<"rememeber not to add any special characters and spaces !!!! "<<endl;
    string s;
    cout<<"enter the string s :";
    cin >>s;
    string t;
    cout<<"enter the string t :";
    cin>>t;

    cout<<countSort(s,t);
    return 0;
}