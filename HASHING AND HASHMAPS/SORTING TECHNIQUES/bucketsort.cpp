#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void bucketSort (vector <float> &arr , int size){

    vector <vector <float>> bucket (size , vector <float> ());

    float max_ele = arr[0];
    float min_ele = arr[0];
    for(int i=0; i<size;i++){
        max_ele = max(max_ele , arr[i]);
        min_ele = min(min_ele , arr[i]);
    }

    float range = (max_ele -min_ele)/size;

    // inserting elements into buckets
    for(int i=0; i<size; i++){
        int idx = (arr[i] - min_ele) /range;
        float diff = (arr[i] - min_ele)/ range - idx  ;
        
        if(diff == 0 && arr[i]!= min_ele){
             bucket[idx-1].push_back(arr[i]);
        }
       else{
         bucket[idx].push_back(arr[i]);
       }
    }

    //sorting individual buckets
    for(int i=0; i<size;i++){
        if(!bucket[i].empty()){
        sort(bucket[i].begin(),bucket[i].end());
        }
    }

    // combinig elements from buckets
    int k =0;
    for(int i=0;i<size;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++]= bucket[i][j];
        }
    }


}
int main (){
    int n;
    cout<<"enter the size of array :";
    cin >> n;

    cout<<endl;
    vector <float> arr(n);
    int i=0;
   // cout<<"WARNING :"<<"ENTER THE NUMBERS IN THE RANGE [0,1)"<<endl;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element:";
        cin >> arr[i];
        i++;
    }

    bucketSort (arr , n);
    i=0;
    while(i<n){
        cout<<arr[i]<<"  ";
        i++;
    }
    return 0;
}