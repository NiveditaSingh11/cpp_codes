#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    double a;
    cout<<"enter a:";
    cin >>a;

    double b;
    cout <<"enter b:";
    cin >>b;

int purpose ;
cout <<"enter the purpose from 1 to 7:";
cin >> purpose;

if (purpose >=1 && purpose <=7){

    switch (purpose){
        case 1:
        double add;
        add = a+b;
        cout <<add<<endl;
        break;

        case 2:
        double sub;
        sub = a-b;
        cout << sub<<endl;
        break;

        case 3:
        double  multi;
        multi = a*b;
    }
}
        return 0;
    }