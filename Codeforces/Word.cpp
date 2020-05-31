#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int length = input.length();

    int count_upper = 0, count_lower = 0;

    for (int i=0; i<length; i++)
    {
        if (int(input[i]) >= 65 && int(input[i]) <= 90)
        {
            count_upper++;
        }

        if (int(input[i]) >= 97 && int(input[i]) <= 122)
        {
            count_lower++;
        }

    }

    char output[length];

    if (count_upper > count_lower)
    {
        for (int i=0; i<length; i++)
        {
            if (int(input[i]) >= 97 && int(input[i]) <= 122)
            {
                output[i] = char(int(input[i]) - 32);
            }
            else
            {
                output[i] = input[i];
            }
        }
    }

    if (count_upper <= count_lower)
    {
        for (int i=0; i<length; i++)
        {
            if (int(input[i]) >= 65 && int(input[i]) <= 90)
            {
                output[i] = char(int(input[i]) + 32);
            }
            else
            {
                output[i] = input[i];
            }
        }
    }

    for (int i=0; i<length; i++)
    {
     cout << output[i];
    }

    cout << endl;

    return 0;
}