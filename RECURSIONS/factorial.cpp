#include <iostream>
int factorial (int n){
    if (n==1 || n==0) return 1;

    return n*factorial(n-1);
}

using namespace std;
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    int fact = factorial(n);
    cout<<fact;
    return 0;
}