#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    int flag_a, flag_b, flag_c;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        scanf("%d %d %d", &flag_a, &flag_b, &flag_c);
        if ((flag_a + flag_b + flag_c) >= 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}