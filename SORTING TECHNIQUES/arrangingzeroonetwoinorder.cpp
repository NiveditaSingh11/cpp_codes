#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin >>n;
    int arr[n];
    cout<<"enter only zero, one and two as input !!"<<endl;
    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element :";
        cin >>arr[i];
        i++;
    }

    int countZero =0;
    int countOne =0;
    int countTwo =0;

    i=0;

    while(i<n){
        if((arr[i] ^ 0)==0){
            countZero ++;
        }

        else if ((arr[i] ^ 1)==0){
            countOne ++;
        }

        i++;
    }
    cout<<countZero<<endl;
    cout <<countOne<<endl;
    cout<< "two  " <<(n - countOne - countZero)<<endl;

    i=0;
    while(i<countZero){
        arr[i]= 0;
        i++;
    }
    
    while(i<(countOne + countZero)){
        arr[i]= 1;
        i++;
    }

    while(i<n){
        arr[i]= 2;
        i++;
    }


i=0;
while (i<n){
    cout<<arr[i]<<"  ";
    i++;
}


    return 0;

}
