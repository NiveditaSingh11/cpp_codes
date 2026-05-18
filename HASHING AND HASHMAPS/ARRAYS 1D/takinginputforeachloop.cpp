#include <iostream>
using namespace std;
int main()
{

    char crr[5];
    // for (char elements :crr){
    //    cin>>elements;
    //  cout <<elements;
    // }  ------> elements aur crr alag alag jagah par hoga!!
    // elements mein value input ho raha hai lekin crr khali hi hai!!

    for (char &elements : crr)
    {
        cin >> elements;
    }
    for (int idx = 0; idx < 5; idx++)
    {
        cout << crr[idx] << endl;
    }
    return 0;
}