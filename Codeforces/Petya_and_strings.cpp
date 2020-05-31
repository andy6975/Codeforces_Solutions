#include <iostream>

using namespace std;

int main()
{
    string a, b;
    int length, flag;
    cin >> a;
    cin >> b;
    length = a.length();

    for (int i=0; i<length; i++)
    {
        if (int(a[i]) >= 65 && int(a[i]) <= 90)
        {
            a[i] = char(int(a[i]) + 32);
        }

        if (int(b[i]) >= 65 && int(b[i]) <= 90)
        {
            b[i] = char(int(b[i]) + 32);
        }

        if (a[i] > b[i])
        {
            flag = 1;
            break;
        }

        else if (b[i] > a[i])
        {
            flag = -1;
            break;
        }

        else
        {
            flag = 0;
        }
    }
    cout << flag << endl;
    return 0;
}