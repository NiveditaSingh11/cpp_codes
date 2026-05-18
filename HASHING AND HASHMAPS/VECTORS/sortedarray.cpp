#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector :";
    cin>>n;

    vector <int> v(n);
    int i=0;
    while(i<v.size()){
        cout<<"enter the element :";
        cin >> v[i];
        i++;
    }

    bool isSorted = true;
   i=1;
   while(i<v.size()){
    if(v[i]>v[i+1]){
         isSorted =false;
         break;
    }
    i++;
   }

   if(isSorted){
    cout<<"sorted hai!!";
   }
   else{
    cout<<"nhi hai sorted!!";
   }
    return 0;
}