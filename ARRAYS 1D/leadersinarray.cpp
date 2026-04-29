#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    int i=0;
    while(i<n){
        cout<<"enter the element :";
        cin>>arr[i];
        i++;
    }

    int leader = arr[n-1];

    for(int i=n-1 ; i>=0 ;i--){
        if(arr[i]>leader){
            leader = arr[i];
            cout<<"leaders are:" <<leader<<endl;
    }
    
}


    return 0;
}