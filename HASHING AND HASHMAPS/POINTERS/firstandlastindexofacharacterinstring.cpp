#include <iostream>
using namespace std;
void firstAndLastIndex(string s, char ch, int *first, int *last)
{
    int i = 0;
    while (i < s.size())
    {
        if (s[i] == ch)
        {
            *first = i;
            break;
        }
        i++;
    }

    i = (s.size() - 1);
    while (i >= 0)
    {
        if (s[i] == ch)
        {
            *last = i;
            break;
        }
        i--;
    }

    return;
}

int main()
{

    string s = "aaacad";
    char ch = 'a';
    int fi = -1;
    int li = -1;
    int *pf = &fi;
    int *pl = &li;
    firstAndLastIndex(s, ch, pf, pl);

    cout << *pf << " " << *pl << endl;

    cout << fi << "  " << li;
    return 0;
}