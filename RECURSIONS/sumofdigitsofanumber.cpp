#include <iostream>
using namespace std;

 int sum (int n){
    if(n>=0 and n <=9) return n;

    int m= n % 10;

    return m+ sum (n/10);
 } 


int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    cout<< sum (n);
    return 0;
}