#include <iostream>

using namespace std;

int main()
{
    int n, h, temp_h;
    cin >> n >> h;

    int road_width = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> temp_h;
        if (temp_h > h)
        {
            road_width += 2;
        }
        else
        {
            road_width += 1;
        }
    }

    cout << road_width << endl;

    return 0;
}