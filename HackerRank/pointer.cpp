#include <iostream>

using namespace std;

void update(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b > *b? (*a - *b) - *b: *b - (*a - *b);
}

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    update(&a, &b);
    cout << a << endl;
    cout << b << endl;

    return 0;
}