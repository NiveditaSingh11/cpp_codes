#include <iostream>
using namespace std;
int main (){

    int n;
    cout<<"n:";
    cin>>n;

    int sum=0;

    do {
        int  num ;
        cout<<"num:";
        cin>> num;
        sum = sum +num;
        n--;
    }while (n>0);
    cout <<sum;
    return 0;
}