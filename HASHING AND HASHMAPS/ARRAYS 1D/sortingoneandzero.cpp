#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    // enter only 0 and 1 as input in the array !!

    int i=0;
    while(i<n){
        cout<<"enter the input as 0 or 1 :";
        cin>>arr[i];
        i++;
    }

    int countZero =0;
    i=0;
    while(i<n){
        if(arr[i]==0){
            countZero++;
        }
        i++;

    }

    cout<<"number of zeros in the array :"<<countZero<<endl;
    cout<<"number of ones in the array :"<< (n-countZero)<<endl;

    i=0;
    while(i<countZero){
        arr[i] =0;
        cout<<arr[i];
        i++;
    }

    i = (countZero);
    while(i<=(n-countZero+1)){
        arr[i]=1;
        cout<<arr[i];
        i++;
    }
    
    return 0;
}