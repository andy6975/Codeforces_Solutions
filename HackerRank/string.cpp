#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    int len_a = a.length();
    int len_b = b.length();

    cout << len_a << ' ' << len_b << endl;

    char concat[len_a + len_b];

    for (int i=0; i<(len_a + len_b); i++)
    {
        if (i < len_a)
        {
            concat[i] = a[i];
        }
        else if (i >= len_a)
        {
            concat[i] = b[i - len_a];
        }
    }

    for (int i=0; i<(len_a + len_b); i++)
    {
        cout << concat[i];
    }

    cout << endl;

    char temp;

    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << ' ' << b << endl;

    return 0;
}