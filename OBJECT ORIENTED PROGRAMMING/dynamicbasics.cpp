#include <bits/stdc++.h>
using namespace std;
int main(){
    int x=7;
    int *ptr =&x;
    cout<<*ptr<<endl;

    int *p = new int (5425); //dynamic memory allocation at runtime !!
    cout<<*p<<endl;

    // gets storage in heap memory !!
    return 0;
}