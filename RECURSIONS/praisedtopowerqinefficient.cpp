#include<iostream>
using namespace std;
int exp(int p, int q){
    if(q==0) return 1;
    if(q==1) return p;

return p*  exp(p , (q-1));
}
int main(){
    int p;
    cout<<"enter the base:";
    cin>> p;

    int q;
    cout<<"enter the exponent :";
    cin>>q;

    cout<< exp( p, q);
    return 0;
}