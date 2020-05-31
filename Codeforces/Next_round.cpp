#include <iostream>

using namespace std;

int main()
{
    int n, k, i = 0, count = 0;
    cin >> n >> k;
    int scores[n];
    while (i < n)
    {
        cin >> scores[i];
        i++;
    }

    int threshold = scores[k-1];
    
    for (int j=0; j<n; j++)
    {
        if (scores[j] >= threshold && scores[j] > 0)
            count++;
    }
    cout << count << endl;
    return 0;
}