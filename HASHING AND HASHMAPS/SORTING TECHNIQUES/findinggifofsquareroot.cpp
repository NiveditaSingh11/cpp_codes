#include <iostream>
using namespace std;
int squareRoot(int x){
    int lo = 1;
    int hi= x;
    int ans= -1;
    while(lo<=hi){
        int mid =  lo+(hi-lo)/2;

        if(mid*mid <= x){
            ans = mid;
            lo= mid+1;
        }

        else{
            hi = mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number to be checked :";
    cin >>n ;

    cout<<squareRoot(n);
    return 0;

}
// time complexity = O(log x) <3
// space complexity = O(1)    