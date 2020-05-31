#include <iostream>

using namespace std;

int main()
{
    int n = 0, q = 0, k = 0;
    scanf("%d %d", &n, &q);
    int * main_array[n];
    for (int i=0; i<n; i++)
    {
        cin >> k;

        int * ptr;
        ptr = new (nothrow) int [k];

        for (int j=0; j<k; j++)
        {
            cin >> ptr[j];      
        }
        main_array[i] = ptr;
    }

    for (int num=0; num<q; num++)
    {
        int i, j;
        cin >> i >> j;
        cout << *(main_array[i] + j) << endl;
    }

    for (int i=0; i<n; i++)
    {
        delete[] main_array[i];
    }

    return 0;
}