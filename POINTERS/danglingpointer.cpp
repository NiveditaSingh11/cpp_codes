#include <iostream>
using namespace std;
int main(){

    int *ptr=NULL;
    if ( 1 ){

        int x=10;
        ptr=&x;

    }
    cout<<ptr;
    return 0;
}