#include <bits/stdc++.h>
using namespace std;
class Hashing
{

public:
    vector<list<int>> hashtable;
    int buckets;

    Hashing(int size)
    {
        buckets = size;
        hashtable.resize(size);
    }

    int hashvalue(int key)
    {
        return key % buckets; // division method
    }

    void add(int key)
    {
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }

    list<int>::iterator search(int key)
    {
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }

    void deleteKey(int key)
    {

        int idx = hashvalue(key);

        if (search(key) != hashtable[idx].end())
        { // key is present
            hashtable[idx].erase(search(key));
            cout << key << " is deleted" << endl;
        }

        else
        {
            cout << key << " is not present in the hashtable";
        }
    }
};
int main()
{
    Hashing h(10);

    h.add(5);
    h.add(9);
    h.add(3);
    h.add(6);
    h.add(7);

    h.deleteKey(7);
    h.deleteKey(7);

    return 0;
}