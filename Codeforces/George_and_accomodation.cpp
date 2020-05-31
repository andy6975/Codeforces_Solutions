#include <iostream>

using namespace std;

int main()
{
    int n, p, q;
    int num_rooms = 0;

    cin >> n;

    for (int i=0; i<n; i++)
    {
        cin >> p >> q;
        if ((q-p) >= 2)
        {
            num_rooms++;
        }
    }

    cout << num_rooms << endl;

    return 0;
}