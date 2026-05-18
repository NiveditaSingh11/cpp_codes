#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string decodedString (string s){
    // traversing the encoded string
     string result="";
    for(int i=0;i<s.length();i++){
       
        if(s[i] != ']'){
            result.push_back (s[i]);
        }
        else{
            // extract str from result
            string str="";
            while(!result.empty() && result.back() != '['){
                str.push_back(result.back());
                result.pop_back();
            }

            //reversing the str
            reverse(str.begin(), str.end());

            //remove the last character from result which is [
            result.pop_back();

            //extract num from result 
            string num ="";
            while(!result.empty() && (result.back()>='0'&&result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
            }

            // reversing the num string 

            reverse(num.begin(),num.end());

            //convert string into integer
            int int_num = stoi(num);

            //inserting str in result int_num times
            while(int_num){
                result += str;
                int_num --;
            }

        }
    }
    return result;
}
int main(){
    string str;
    cout<<"enter the string to be decoded :";
    cin >> str;

   cout<<  decodedString(str);
    return 0;
}