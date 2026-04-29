#include <iostream>
#include <vector>
using namespace std;
bool canPlaceStudents(vector<int> &arr,int s, int mid){
    int studentsReqd =1;
    int lastPlaced = arr[0];
    for(int i=0;i<arr.size();i++){
        if((arr[i] -lastPlaced) >= mid){
            studentsReqd++;
            lastPlaced = arr[i];
            if(studentsReqd == s ){
                return true;
            }
        }
        
    }
    return false;

}

int race(vector <int> &arr , int s){
    int n= arr.size();
    int lo=1;
    int hi = arr[n-1] - arr[0];
    int ans =-1;
    while(lo<=hi){
        int mid = lo+(hi -lo)/2;

        if(canPlaceStudents (arr, s, mid)){
            ans = mid;
            lo = mid+1;
        }

        else {
            hi =mid -1;
        }
    }
    return ans;
}
int main(){

    int n;
    cout<<"enter the number of starting spots :";
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<arr.size() ;i++){
        cout<<"enter the location of each spot :";
        cin >> arr[i];
    }
    int s;
    cout<<"enter the number of students :";
    cin >>s;

    cout<<race (arr, s);
    return 0;
} 