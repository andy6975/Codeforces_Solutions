#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string love = "I love ", hate = "I hate ";

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            if (i != n)
            {
                cout << hate << "that ";
            }
            else
            {
                cout << hate << "it" << endl;
            }
            
        }

        else
        {
            if (i != n)
            {
                cout << love << "that ";
            }
            else
            {
                cout << love << "it" << endl;
            }
            
        }
    }

    return 0;
    
}