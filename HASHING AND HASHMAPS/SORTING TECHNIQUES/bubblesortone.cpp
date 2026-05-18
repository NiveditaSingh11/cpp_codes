#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements of array:";
    cin>>n;
    int arr[n];
    int i=0;
    while (i<n){
        cout<<"enter the "<<i+1<<" th element:";
        cin>>arr[i];
        //cout<<arr[i]<<endl;
        i++;
    }

    for(i=0; i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    i=0;
    while(i<n){
        cout<<arr[i]<<"  ";
        i++;
    }
    return 0;
}