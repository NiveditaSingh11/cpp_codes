#include <iostream>
using namespace std;
int main (){
    char ch ;
    cout << "enter the character:";
    cin >> ch ;
    switch (ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': 
        cout <<"entered character is a vowel .";
        break;

        default :
        cout << "entered character is consonant .";
    }
    return 0;

}