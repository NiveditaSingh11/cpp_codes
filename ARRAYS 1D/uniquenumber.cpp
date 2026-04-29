#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];

    int i=0;
    while (i<n){
        cout<<"enter the element:";
        cin>> arr[i];
        i++;
    }

    int result = 0;
    for(int i=0; i<n;i++){
        result = result ^ arr[i];
    }

    cout<<"number jo couple nhi bana paya !!!:"<<result;
    return 0;
}