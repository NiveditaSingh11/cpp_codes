#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin >>n;

    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"enter the element:";
            cin >>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        int sumrow =0;
        for(int j=0;j<n;j++){
            sumrow = arr[i][j]+ sumrow;
        }
        cout<<"row "<<i <<" sum :"<<sumrow;
        cout<<endl;

    }

    for(int j=0;j<n;j++){
        int sumcolumn =0;
        for(int i=0;i<n;i++){
            sumcolumn = sumcolumn +arr[i][j];
        }
        cout<<"column "<<j <<" sum :"<<sumcolumn; 
        cout<<endl;  
     }
    return 0;
}