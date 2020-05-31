#include <iostream>

using namespace std;

int main()
{
    int n = 0, i = 0;
    cin >> n;
    int array[n];
    while (i < n)
    {
        cin >> array[i];
        i++;
    }
    for (i = n-1; i >= 0; i--)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}