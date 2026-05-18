#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> &arr , int *si , int *ei){


}
int main(){
    int n;
    cout<<"enter the number of elements of array: ";
    cin>> n;
    vector<int> arr(n);
    int i=0;
    while(i<n){
        cout<<"enter the element:";
        cin >>arr[i];
        i++;
    }

    int k;
    cout<<"number of steps by which array is to be rotated :";
    cin >>k;

    k= k%n;
    

    return 0;
}