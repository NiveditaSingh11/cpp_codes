#include <iostream>
using namespace std;

class Complex {
public:
    int real, img;

    Complex(int r, int i) : real(r), img(i) {}

    Complex operator+(const Complex &c) {
        return Complex(real + c.real, img + c.img);
    }
};

int main() {
    int r1;
    cout<<"enter the first real part :";
    cin >> r1;
    int i1;
    cout<<"enter the first img part :";
    cin >> i1;
    int r2;
    cout<<"enter the second real part :";
    cin >> r2;
    int i2;
    cout<<"enter the second img part :";
    cin >> i2;

    Complex c1(r1,i1), c2(r2,i2);
    Complex c3 = c1 + c2;

    cout << c3.real << " + i" << c3.img;
}