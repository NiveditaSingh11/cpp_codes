#include <iostream>
#include <vector>
using namespace std;
bool searchMatrix (vector<vector<int>> &arr , int target ){
    int n= arr.size();
    int m= arr[0].size();
    int lo=0;
    int hi= n*m-1;

    while(lo<=hi){
        int mid= lo+ (hi-lo)/2;

        int x= mid/m;
        int y= mid %m;
        if(arr[x][y]== target ){
            return true;
        }
        else if(arr[x][y]<target){
            lo=mid+1;
        }
        else {
            hi=mid-1;
        }
    }

    return false;

}
int main(){
    int n;
    cout<<"enter the rows of array :";
    cin >>n;

    int m;
    cout<<"enter the columns of array :";
    cin >> m;

    vector <vector<int>> arr(n ,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"enter the element:";
            cin >>arr[i][j];
        }
    }

    int target ;
    cout<<"enter the target :";
    cin >> target ;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout <<endl;
    }

cout<<searchMatrix(arr,target);
    return 0;
}