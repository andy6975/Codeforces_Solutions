#include <iostream>

using namespace std;

int main()
{
    int n, groups = 1;
    cin >> n;

    string magnet, next_magnet;
    cin >> magnet;

    for (int i = 1; i < n; i++)
    {
        cin >> next_magnet;
        if (next_magnet[1] != magnet[1])
        {
            groups++;
        }
        magnet = next_magnet;
    }
    
    cout << groups << endl;

    return 0;
}