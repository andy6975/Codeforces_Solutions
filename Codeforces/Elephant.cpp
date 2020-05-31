#include <iostream>

using namespace std;

int main()
{
    double x;
    cin >> x;

    int steps[5] = {0};

    int quotient;

    for (int i=5; i>0; i--)
    {
        quotient = x / i;
        steps[i-1] = quotient;
        x = x - (i * quotient);

        if (x == 0)
        {
            break;
        }
    }

    int total_steps = 0;

    for (int i=0; i<5; i++)
    {
        total_steps += steps[i];
    }

    cout <<  total_steps << endl;
    
    return 0;
}