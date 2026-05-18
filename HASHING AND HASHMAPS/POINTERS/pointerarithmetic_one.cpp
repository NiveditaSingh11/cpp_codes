#include<iostream> 
using namespace std;
int main(){
    int x=20;
    int *ptr =&x;
    cout<<ptr<<endl;
    cout<<(ptr+1)<<endl;
    cout<<(ptr-1)<<endl;

    ptr += 1;
    cout<<ptr<<endl;

    ptr++;
    cout<<ptr<<endl;

    ++ptr ;
    cout<<ptr<<endl;
    return 0;
}