#include <iostream>
using namespace std;
int main(){
    int row1;
    cout<<"enter the row of array1:";
    cin>>row1;
    int column1;
    cout<<"enter the row of array1:";
    cin>>column1;
    int row2;
    cout<<"enter the row of array2:";
    cin>>row2;
    int column2;
    cout<<"enter the row of array2:";
    cin>>column2;


    if(row1 != column2) {

        cout<<"multiplication cannot happen !!";
        return 0;
    }

    int arr[row1][column1];
    for(int i=0;i<row1;i++){
        for(int j=0; j<column1;j++){
            cout<<"enter the element of array 1:";
            cin>>arr[i][j];
        }
    }

     for(int i=0;i<row1;i++){
        for(int j=0; j<column1;j++){
          
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

     int brr[row2][column2];
    for(int i=0;i<row2;i++){
        for(int j=0; j<column2;j++){
            cout<<"enter the element of array 2:";
            cin>>brr[i][j];
        }
    }

     for(int i=0;i<row2;i++){
        for(int j=0; j<column2;j++){
          
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }

int crr[row1][column2];

for(int i=0;i<row1;i++){
    for(int j=0; j<column2 ; j++){
        crr[i][j]=0;

        for(int k=0; k<column1 ;k++){
            crr[i][j] =crr[i][j] + arr[i][k] * brr[k][j];
        }
    }
}

for(int i=0; i<row1;i++){
    for(int j=0;j<column2 ; j++){
        cout<<crr[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}