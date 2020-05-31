#include <iostream>

using namespace std;

int main()
{
    int n, p;
    cin >> n;

    int gifts[n+1];

    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        gifts[p] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << gifts[i] << ' ';
    }
    
    cout <<  endl;

    return 0;
    
}