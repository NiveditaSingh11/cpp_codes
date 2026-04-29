#include <iostream>
#include <vector>
using namespace std;
void insertionSort(vector <int> &v){

    int n= v.size();
    for(int i=1;i<n;i++){
        int current = v[i];
        int j=i-1;
        while(j>=0 && v[j]>current){
            v[j+1] = v[j];
            j--;
        }
        v[j+1]= current ;
    }
    

}
int main(){
    int n;
    cout<<"enter the number of elements:";
    cin>> n;

    vector<int> v(n);
    int i=0;
    while(i<n){
        cout<<"enter the "<<i+1<<"th element:";
        cin>> v[i];
        i++;
    }

    insertionSort(v);
    i=0;
    while(i<n){
        cout<<v[i]<<"  ";
        i++;
    }
    return 0;
}