#include <iostream>

using namespace std;

int main()
{
    int n, t; char temp;
    cin >> n >> t;

    string order;
    cin >> order;

    for (int i=0; i<t; i++)
    {
        int j = 0;
        while (j<n-1)
        {
            if (order[j] == 'B' && order[j+1] == 'G')
            {
                temp = order[j];
                order[j] = order[j+1];
                order[j+1] = temp;
                j += 2;
            }

            else
            {
                j += 1;
            }
            
        }
    }

    cout << order << endl;

    return 0;
}