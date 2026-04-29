#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string s1;
    cout<<"enter the string :";
    getline (cin , s1);
    cout<<s1.size()<<endl<<s1.length()<<endl;

    char ch ='e';
    s1.push_back(ch);
    cout<<s1<<endl;

    char ch1[20]="nivedita";
    cout<<strlen(ch1);


    return 0;
}