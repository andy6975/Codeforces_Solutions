#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    if (s.length() != t.length())
    {
        cout << "NO" << endl;
        return 0;
    }

    int length = s.length();
    int match = 0;

    char r[length];

    for (int i=0; i<length; i++)
    {
        r[i] = s[(length-1) - i];
    }

    for (int i=0; i<length; i++)
    {
        if (r[i] == t[i])
        {
            match++;
        }
    }

    if (match == length)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
    
}