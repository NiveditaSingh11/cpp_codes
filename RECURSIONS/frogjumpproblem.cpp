#include <iostream>
#include <cmath>
using namespace std;
int f(int *h, int n, int i){
    //base case 
    //if(i==n) return 0;
    if(i== (n-1)) return 0;
    if (i ==(n-2)) return  abs(h[i] - h[i+1]);

    return min(f(h , n, i+1) +abs(h[i] -h[i+1]) , f(h,n,i+2)+abs(h[i]-h[i+2]));

}
int main(){
    //int arr[] = {10, 30,40, 20 };
    //int n=4;
    //cout << f(arr , n ,0);

    int n;
    cout<<"enter the number of elements of array :";
    cin>>n;

    int arr[n];
    int i=0 ;
    while(i<n){
        cout<<"enter the price of"<<i+1<<"th stone:";
        cin>>arr[i];
        i++;
    }
    cout<< f(arr, n, 0);
    return 0;
}