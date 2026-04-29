#include<iostream>
using namespace std;
void print(int *arr , int idx , int n){
    if(idx == n) return;

    cout<< arr[idx]<<"  ";

   return  print (arr , idx+1,n);

}
int main (){
    int n;
    cout<<"enter the number of elements of array:";
    cin>>n;
int arr[n];
    int idx= 0;
    while(idx<n){
        cout<<"enter the element:";
        cin>> arr[idx];
        idx++;
    }

    print(arr,0,n);
    return 0;
}