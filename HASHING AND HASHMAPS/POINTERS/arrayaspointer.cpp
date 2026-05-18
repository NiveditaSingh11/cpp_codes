#include <iostream>
using namespace std;
int main (){
    int arr[2] ={7,6};
    int *ptr =&arr[0];
    cout<<arr<<endl;
    cout<<ptr<<endl;

    cout<<*(arr+0)<<" "<<*(arr +1)<<endl;
    return 0;
}