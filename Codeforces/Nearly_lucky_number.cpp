#include <iostream>

using namespace std;

int main()
{
    long long number;
    cin >> number;

    int count = 0, remain;

    while (number)
    {
        remain = number % 10;
        number /= 10;

        if (remain == 4 || remain == 7)
        {
            count++;
        }

    }    

    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }

    return 0;
    
}