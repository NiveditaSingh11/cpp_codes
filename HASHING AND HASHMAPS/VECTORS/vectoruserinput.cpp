#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v;
    int i=0;
    while(i<5){
        int element;
        cout <<"enter the element :";
        cin >>element;
        v.push_back(element);
        i++;
    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    vector <int> vec(6);
    int j=0;
    while (j<6){
        cout<<"enter the elements of 2nd vector:";
        cin >> vec[j];
        j++;
    }

    for(int j=0; j<vec.size();j++){
        cout<<vec[j]<<endl;
    }

    for(int ele:vec){
        cin>>ele;
        cout<<ele<<" ";
    }

    return 0;
}
