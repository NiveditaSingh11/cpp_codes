#include <iostream>
using namespace std;
int maze(int n, int m){
    int rightways=0;
    int downways =0;
    if(n==1 && m==1) return 1;

    if(n==1) rightways += maze(n , m-1);

    if(m==1) downways += maze (n-1, m);

    if(n>1 && m>1) {
        rightways += maze(n , m-1);
        downways += maze (n-1, m);
    }

    int totalways = rightways + downways;

    return totalways;
}
int main(){
    int n;
    cout<<"enter the rows:";
    cin>> n;
    int m;
    cout<<"enter the column :";
    cin>>m;

    int numberofways = maze (n,m);

    cout<< numberofways;
    return 0;
}