#include <iostream>
using namespace std;
int main(){
    float f=10.2;
    int x=10;
    void *ptr =&f;
    ptr=&x;
    int *integerPointer = (int *)ptr;
   // float *floatPointer = (float *)ptr;
    cout<<*integerPointer<<endl;
   // cout<<*floatPointer<<endl;

    return 0;
}
 