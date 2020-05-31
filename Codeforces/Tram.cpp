#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    int temp = 0, max_cap = 0;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        temp = (temp - a) + b;
        if (temp >= max_cap)
        {
            max_cap = temp;
        }
    }

    cout << max_cap << endl;

    return 0;
}