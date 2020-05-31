#include <iostream>

using namespace std;

inline int check(int *ptr, int length)
{

    int flag = 0;

    for (int i = 0; i < length; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (*(ptr + i) == *(ptr + j))
            {
                flag++;
                if (flag == 1)
                {
                    break;
                }
            }

        if (flag == 1)
        {
            break;
        }
        }
    }

    return flag;
}

int main()
{
    int year, y;
    cin >> year;

    int digits[4] = {0};
    int len = 0;

    while (1)
    {
        year++;
        y = year;
        len = 0;

        while (y)
        {
            digits[len] = y % 10;
            y /= 10;
            len++;
        }

        int flag = check(digits, len);

        if (flag == 0)
        {
            break;
        }

    }

    cout << year << endl;

    return 0;
    
}