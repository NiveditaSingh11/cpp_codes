#include <iostream>
#include <vector>
using namespace std;
string countSort_in_string(string str){

    vector <int> freq(26,0);
    //adding frequency of every character !!
    for(int i=0;i<str.length();i++ ){
        if(str[i]>='a' && str[i]<= 'z'){
            int idx = str[i] - 'a';
            freq[idx] ++;
        }
        else if(str[i] == ' '){
            continue;
            //ignore spaces !!
        }
        else return "Invalid input! Enter only lowercase letters.";
    }

    // create our sorted array 
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++] = i +'a';
        }
    }

    return str;
}
int main(){
    string str;
    cout<<"Enter the string :";
    getline(cin , str);

   cout<< countSort_in_string(str)<<endl;

    return 0;
}