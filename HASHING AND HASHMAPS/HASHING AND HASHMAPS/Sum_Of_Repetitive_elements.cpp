#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements :";
    cin >>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i+1<<"th element :";
        cin>>input[i];
    }

    map<int,int> m;
    for(int i=0;i<n;i++){ //O(n)
        //storing frequency of every element in input vector
        m[input[i]]++;
    }

    //m[1]++ --> [1,1]
    //m[1]++ --> [1,2]
    //m[7]++ --> [7,1]

    int sum=0;
    //finding sum of repetitive element
    //pair - element , frequency
    for(auto pair :m){
        if(pair.second >1){ //element is repetitive
            sum += pair.first;
        }
    }

    cout<<"answer is: " <<sum<<endl;
    return 0;

}