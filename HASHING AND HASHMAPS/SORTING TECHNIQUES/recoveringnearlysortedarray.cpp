#include <iostream>
using namespace std;
void fixSwappedArray(int arr[] , int n){
    int first =-1;
    int second =-1;

    for(int i=0; i<n-1;i++){
        if(arr[i]>arr[i+1]){
            first =i;
            break;
        }
        
    }

    for(int i =n-1 ; i>0;i--){
        if(arr[i]<arr[i-1]){
            second =i;
            break;
        }
    }

    if(first != -1 && second != -1){
        swap(arr[first] , arr[second]);
    }


}
int main (){
    int n;
    cout<<"enter the size of array:";
    cin >> n;
    int arr[n];

    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element : ";
        cin >> arr[i];
        i++;
    }

    fixSwappedArray(arr, n);

    i=0;
    while(i<n){
        cout<<arr[i]<<"  ";
        i++;
    }
    return 0;
}
// sirf do  hi element ka jagah interchange tha ek sorted array mein toh sirf unhi dono elements ko interchange karna hai !!!