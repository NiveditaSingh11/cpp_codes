#include <iostream>
using namespace std;
int alternateSum(int n)
{

    if (n == 0)
        return 0;

    if (n % 2 == 0)
    {
 
        return -n + alternateSum(n - 1);
    }
    else
    {
        return n + alternateSum(n - 1);
    }
}
int main()
{
    int n;
    cout << "enter the number :";
    cin >> n;
    cout << alternateSum(n);

    return 0;
}