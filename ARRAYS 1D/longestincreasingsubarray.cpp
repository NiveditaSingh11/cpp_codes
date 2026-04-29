#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array :";
    cin >> n;
    int arr[n];

for(int i=0; i<n;i++){
    cout<<"enter the element:";
    cin>>arr[i];
}

int maxlength = 1;
int currentlength =1;

for(int i=1;i<n;i++){
  
    if(arr[i]> arr[i-1])  currentlength = currentlength+1 ;

    else currentlength=1;

    if(currentlength >maxlength )  maxlength = currentlength ;

    
     
}

cout<< maxlength;
    return 0;
}