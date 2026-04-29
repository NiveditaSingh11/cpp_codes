#include <iostream>
using namespace std;
int main()
{

    int side1;
    cout << " enter the first side :";
    cin >> side1;
    int side2;
    cout << "enter the second side :";
    cin >> side2;
    int side3;
    cout << "enter the third side :";
    cin >> side3;

    if (side1<=0 || side2<=0|| side3<=0){
        cout <<"invalid triangle !!";
        return 0;
    }

    if ((side1 + side2) > side3 && (side2 + side3) > side1 && (side1 + side3) > side2)
    {

        if (side1 == side2 && side2 == side3)
        {
            cout << "equilateral triangle";
        
        }
        else if ((side1 == side2) || (side2 == side3) || (side1 == side3))
        {
            cout << "isosceles triangle ";
        }
        else
        {
            cout << "scalene triangle";
        }
    }

    else
    {
        cout << "invalid triangle!!";
    }

    return 0;
}