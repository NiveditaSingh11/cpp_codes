#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    char s1[20]= "College";
    char s2[20]= "Wallah";
    strcat(s1, s2);
    cout<<s1<<endl;

    return 0;
}