#include <iostream>
#include <vector>
using namespace std;

void reverseArray(int *start , int *end){

    while(start <end){
        int temp = *start;
        *start =*end;
        *end = temp;

        start++ ;
        end--;
    }

}
int main(){
    int n;
    cout<<"enter the number of elements in array:";
    cin >> n;
    vector <int> arr(n);
    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element :";
        cin >> arr[i];
        i++;
    }

    reverseArray ( &arr[0] ,&arr[n-1] );

    i=0;
    while(i<n){
        cout<<arr[i]<<"  ";
        i++;
    }



    return 0;
}
