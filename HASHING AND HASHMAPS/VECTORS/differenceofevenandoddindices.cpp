#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector:";
    cin>>n;
    vector <int> v(n);
    int i=0;
    while (i<v.size()){
        cout<<"enter the element:";
        cin>>v[i];
        i++;
    }

    int sumEven =0;
    int sumOdd =0;
    int difference ;

    i=0;
    while(i<v.size()){

        if(i%2==0)
            sumEven = sumEven + v[i];
        

        else
            sumOdd = sumOdd + v[i];
        

        i++;


    }

    difference = sumEven - sumOdd;


cout<<"the difference between numbers at even and odd indices ="<<difference;
    return 0;

}