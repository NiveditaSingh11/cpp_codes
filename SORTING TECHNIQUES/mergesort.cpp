#include <iostream>
#include <vector>
using namespace std;
void mergeArray(vector<int> & arr, int si,  int mid, int ei){
    // int mid_idx = (si +ei)/2;
    int  an = mid - si + 1;
    int bn= ei-mid;
    //cout<< mid<<" "<<an<<" "<<bn<<" ";


    vector<int> a(an);
    vector<int> b(bn);
    for(int i=0 ;i<an ;i++){
        a[i] = arr[si+i];
      //  cout<<a[i];
    }
    for(int j=0; j<bn;j++){
        b[j]= arr[mid+j+1];
       // cout<<b[j];
    }

    int i=0;
    int j =0;
    int k= si;
    while(i<an && j< bn){
        if(a[i] <= b[j]){
            arr[k++] = a[i++];
        }

        else {
            arr[k++] = b[j++];
        }
    }

    while(i<an){
        arr[k++] = a[i++];
    }

    while(j<bn){
        arr[k++]= b[j++];
    }
    
}
void mergeSort(vector <int> &arr, int si, int ei){
    if(si>= ei) return ;
   int mid = si + (ei - si)/2;

   mergeSort(arr,si, mid);
   mergeSort(arr, mid+1,ei);

   mergeArray(arr, si , mid, ei);


}
int main(){
    int n;
    cout<<"enter the number of elements of array:";
    cin >>n;

    vector<int> arr(n);

    int i=0;
    while(i<n){
        cout<<"enter the element:";
        cin >>arr[i];
        i++;
    }

    mergeSort (arr , 0,n-1);
     i=0;
    while(i<n){
        cout<<arr[i]<<"  ";
        i++;
    }
    return 0;
}