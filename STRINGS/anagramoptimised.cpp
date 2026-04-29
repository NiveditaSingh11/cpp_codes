#include <iostream>
#include <string>
#include <vector>
using namespace std ;
bool isAnagram(string s, string t){
    vector<int> freq(26,0);

    //if lengths are different then they are not anagrams
    if(s.length() != t.length())  return false;

    //store frequency of character in the frequency array !!
    for(int i=0;i<s.length();i++){
        freq[s[i] -'a']++ ; // for s increment !!
        freq[t[i] -'a']--;  // for t decrement !!
    }

    // checking if freq of every character is zero

    for(int i =0;i<26;i++){
        if(freq[i] !=0) {
            return false ;
        }
    }

    return true;
} 
int main(){
    string s;
    cout<<"enter the string 1 :";
    cin >>s;

    string t;
    cout<<"enter the string 2 :";
    cin >>t;

   if (isAnagram(s,t)){
    cout<<"Strings are anagram !!"; 
   }

   else{
    cout<<"Strings ae not anagrams !!";
   }


    return 0;

}