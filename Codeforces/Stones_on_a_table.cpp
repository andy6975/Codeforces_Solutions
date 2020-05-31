#include <iostream>

using namespace std;

int main()
{
    int n, count = 0; string s;
    cin >> n; cin >> s;

    char temp = s[0];

    for(int i=1; i<n; i++)
    {
        if (s[i] == temp)
        {
            count++;
        }

        temp = s[i];
    }

    cout << count << endl;

    return 0;
}