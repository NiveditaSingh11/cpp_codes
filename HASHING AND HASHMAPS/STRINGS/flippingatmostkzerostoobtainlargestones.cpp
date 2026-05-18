#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "enter the binary string:";
    cin >> str;
    int k;
    cout << "enter the number of times of atmost flips :";
    cin >> k;
    int length = 0;
    for (int i = 0; i < str.length(); i++)
    {
        int count =0;
        for (int j = i; j < str.length(); j++)
        {
           if (str[j]== '0') {
            count++;
           }

           if(count<=k){
            length = max(length, j-i+1);
           }
           else break;

        }
    }

    cout << length;
    return 0;
}