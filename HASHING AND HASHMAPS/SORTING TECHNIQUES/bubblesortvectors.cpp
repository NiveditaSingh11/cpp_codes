#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector <int> &v){
    int n= v.size();
    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-1-i;j++){
            if(v[j]>v[j+1]){
                swap(v[j], v[j+1]);
                //int temp = v[j];
                //v[j]=v[j+1];
                //v[j+1]= temp;

            }
        }
    }

}
int main(){
    int n;
    cout<<"enter the number of elements:";
    cin>> n;

    vector <int> v(n);

    int i=0;
    while(i<n){
        cout<<"enter the array element:";
        cin>> v[i];
        i++;
    }

    bubbleSort (v);

    i=0;
    while(i<n){
        cout<<v[i]<<"  ";
        i++;
    }
    return 0;
}