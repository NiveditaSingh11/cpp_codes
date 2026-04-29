#include <iostream>
#include <vector>
using namespace std;

void merge (vector <int> &arr1 , int n1 , vector<int> &arr2, int n2, vector<int> &arr3 ){

    int a=0; //array 1
    int b=0; //array 2
    int c=0; //array 3

    while(a<n1 && b<n2){
        if(arr1[a]<arr2[b]) {
            arr3[c++] =arr1[a++];
        }

        else {
            arr3[c++] = arr2[b++];
        }
    }
    while(a<n1){
        arr3[c++] = arr1[a++];
    }

    while(b<n2){
        arr3[c++] = arr2[b++];
    }
}
int main(){
    int n1 ;
    cout<<"enter the size of first array :";
    cin >> n1;

    vector<int> arr1(n1);

    int i=0;
    while(i<n1){
        cout<<"enter the "<<i+1<<"th element of first array: ";
        cin >> arr1[i];
        i++;
    }

    int n2 ;
    cout<<"enter the size of second array :";
    cin >>n2 ;

    vector<int> arr2(n2);

    i=0;
    while (i<n2){
        cout<<"enter the "<<i+1<<"th element of second array: ";
        cin >> arr2[i];
        i++;
    }

    int n3 = n1+n2;
    vector <int> arr3(n3);

    merge (arr1 , n1 , arr2, n2 , arr3);

    i=0;
    while(i<n3){
        cout<<arr3[i]<<"  ";
        i++;
    }


//both arr1 and arr2 are sorted !!! 
    
    return 0;
}