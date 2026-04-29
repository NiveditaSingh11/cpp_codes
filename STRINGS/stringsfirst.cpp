#include <iostream>

using namespace std;
int main(){

    string str ="college";

    string str1("wallah");
    cout<<str<<" "<<str1<<endl;

    // to take input of string !!

    string str2;
    cout<<"enter the string:";
    cin >> str2;
    cout<<str2<<endl;

    string str3;
    cout<<"enter the full string : ";
    cin.ignore();
    getline(cin , str3);
    cout<<str3<<endl;

    cout<<str3[2];
    return 0;
}