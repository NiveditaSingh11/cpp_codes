#include <iostream>
using namespace std;
string f(string &s , int i, int n){
    if(i==n) return "" ;
    string curr="" ;
    curr += s[i];
    return ((s[i]=='a')? "" : curr)+f(s,i+1,n);


}
int main(){
    string s ;
    cout<<"enter the string:";
    getline(cin , s);
    int n = s.length();
    cout<<f(s,0,n);
    return 0;
}
