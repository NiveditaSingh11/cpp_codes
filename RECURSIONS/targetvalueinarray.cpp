#include <iostream>
using namespace std;
bool f(int *arr , int n ,int i , int target){

    if(i > n-1) return 0 ;

    if((arr[i] ^ target)==0) return 1;

    return f(arr , n, i+1 , target );


}
int main(){
    int n;
    cout<<"enter the number of elements of array:";
    cin>>n;

    int arr[n];
    int i=0;
    while(i<n){
        cout<<"enter the element :";
        cin >>arr[i];
        i++;
    }

    int target ;
    cout<<"enter the target value :";
    cin>>target ;

    int x=  f(arr , n, 0 , target);
    cout<<x<<endl;
    if (x==1){
        cout<<"target value is present in array !!";
    }
    else {
          cout<<"target value is not present in array !!";
    }
    return 0;
}