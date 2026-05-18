#include <iostream>
#include <vector>
using namespace std;

int partition(vector <int> &arr , int first , int last){
    int pivot = arr[last];
    int i= first -1; //for inserting elements less than pivot element
    int j= first ; //for finding elements less than pivot

    for(; j<last ; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    //now i is pointing to the last element less than pivot
    //correct position for pivot is i+1 !!
    swap(arr[i+1], arr[last]);
    return i+1;
}

void quickSort(vector <int> &arr ,  int first , int last){
    if(first >= last) {
        return;
    }
   int  pi = partition(arr , first , last);

    quickSort(arr , first , pi-1);
    quickSort(arr, pi+1, last);
}
int main(){
    int n;
    cout<<"enter the number of elements of array:";
    cin >>n ;

    vector<int> arr(n);

    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element:";
        cin >>arr[i];
        i++;
    }

    quickSort(arr, 0 , n-1 );

    i=0;
    while(i<n){
        cout<<arr[i]<<"   ";
        i++;
    }


    return 0;
}