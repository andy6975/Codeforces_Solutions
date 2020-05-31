#include <iostream>

using namespace std;

int main()
{
    int n, x_levels, y_levels;
    cin >> n;
    cin >> x_levels;

    int x[x_levels];

    for (int i = 0; i < x_levels; i++)
    {
        cin >> x[i];
    }

    cin >> y_levels;

    int y[y_levels];

    for (int i = 0; i < y_levels; i++)
    {
        cin >> y[i];
    }

    int level_counts[n] = {0};

    for (int i = 0; i < x_levels; i++)
    {
        level_counts[x[i] - 1]++;
    }

        for (int i = 0; i < y_levels; i++)
    {
        level_counts[y[i] - 1]++;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (level_counts[i] == 0)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    
    cout << "I become the guy." << endl;

    return 0;
}