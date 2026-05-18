#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "num1:";
    cin >> num1;

    int num2;
    cout << "num2:";
    cin >> num2;

    cout << (num1 << 1) << endl;
    cout << (num2 >> 1) << endl;
    cout << (num1 | num2) << endl;
    cout << (num1 & num2) << endl;
    cout << (num1 ^ num2) << endl;
    cout << (~num1) << endl;
    cout << (~num2) << endl;
    return 0;
}