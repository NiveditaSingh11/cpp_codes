#include <iostream>
#include <climits>
using namespace std;
int  main (){
    int n;
    cout<<"enter the no. of elements of arrays:";
    cin>> n;
    int max =INT_MIN;
    int arr[n];
    int i=0;
    while(i<n){
        cout<<"enter the array element:";
        cin>>arr[i];
        cout<<"entered array element is:"<<arr[i]<<endl;
        i++;
    }

    i=0;
    while(i<n){
        

        if(arr[i]>max)
        max= arr[i];
        i++;
    }
    cout <<max;
    return 0;
}