#include <iostream>

using namespace std;

int main()
{
    int value, num_steps = 0;
    for (int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> value;
            if (value == 1)
            {
                num_steps = abs(2 - i) + abs(2 - j);
                break;
            }
        }
    }
    cout << num_steps << endl;
}