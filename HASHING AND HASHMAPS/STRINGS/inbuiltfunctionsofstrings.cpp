#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cout<<"enter the string:";
    getline(cin, str);

    cout<<str<<endl;

    reverse(str.begin(), str.end());
    cout<<str<<endl;

    string sub = str.substr(2,4);
    string sub2 = str.substr(1);

    cout<<sub<<endl<<sub2;

    return 0;
}