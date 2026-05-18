#include <iostream>
using namespace std;
int main(){

    int x=10;
    cout<<&x<<endl;

    float y=9.8;
    cout<<&y<<endl;

    int *ptr=&x;
    cout<<ptr<<endl;
     float *ftr = &y;
     cout<<ftr<<endl;

     int *itr;
     cout<<itr;
        return 0;
}