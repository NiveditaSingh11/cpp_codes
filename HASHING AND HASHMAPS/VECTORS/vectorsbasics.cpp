#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    ;

    v.push_back(11);
    cout << "size" << v.size() << endl;
    cout << "capacity " << v.capacity() << endl;

    v.push_back(12);
    cout << "size " << v.size() << endl;
    cout << "capacity " << v.capacity() << endl;

    v.push_back(16);
    cout << "size" << v.size() << endl;
    cout << "capacity" << v.capacity() << endl;

    v.resize(5);
    cout << "size" << v.size() << endl;
    cout << "capacity" << v.capacity() << endl;

    v.resize(10);
    cout << "size" << v.size() << endl;
    cout << "capacity" << v.capacity() << endl;

    v.pop_back();
    v.pop_back();
    cout << "size" << v.size() << endl;
    cout << "capacity" << v.capacity() << endl;

    return 0;
}